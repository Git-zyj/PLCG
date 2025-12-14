/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41701
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) 268015072);
                    var_19 |= (_Bool)0;
                    var_20 = ((/* implicit */signed char) min((arr_2 [i_1 - 3] [i_1 + 1]), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-6)))))))));
                    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0]))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) -1048589))));
                }
            } 
        } 
    } 
    var_23 = ((var_5) % (max((((var_4) ? (var_10) : (((/* implicit */int) (_Bool)1)))), (var_3))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_13 [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((var_13) < ((~(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((((/* implicit */int) max((arr_1 [i_5] [i_5]), (arr_1 [i_3] [i_5])))) % ((+(((/* implicit */int) ((((/* implicit */_Bool) 4002973493168310308LL)) && (((/* implicit */_Bool) var_0))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) var_12);
                        var_26 += ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_7 [i_4] [i_3]))))))) ? (min((((/* implicit */long long int) ((-1048589) < (-1048591)))), (min((arr_8 [i_3] [10LL]), (((/* implicit */long long int) -1048576)))))) : (((/* implicit */long long int) min((arr_10 [i_3]), (((/* implicit */int) min((var_17), ((signed char)-82)))))))));
                        var_27 &= (((-(((/* implicit */int) ((_Bool) -1048576))))) - ((~(((/* implicit */int) var_7)))));
                        var_28 = max((min((((((/* implicit */_Bool) 1048575)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_2))), (((/* implicit */long long int) (-(var_11)))))), (((/* implicit */long long int) ((max((var_13), (-1048588))) % (max((1048571), (arr_14 [(_Bool)0] [i_4] [i_5] [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_29 += (_Bool)0;
                        var_30 ^= ((/* implicit */_Bool) var_9);
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_7)))));
                        arr_25 [i_3] [i_3] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_19 [i_8] [i_5] [i_4] [i_3])) : (((/* implicit */int) arr_9 [i_3])))));
                        arr_26 [i_3] [i_3] [i_5] = ((/* implicit */int) ((arr_12 [i_3]) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (2147483634) : (var_13))), (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_32 = (+((((_Bool)0) ? (-1) : (((/* implicit */int) (_Bool)0)))));
                    var_33 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 706576946)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (7255107239917216453LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3] [i_4])))));
                    var_34 = ((/* implicit */_Bool) ((var_4) ? (((((/* implicit */_Bool) -5616431765529735716LL)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_27 [i_3] [i_9 - 1]))));
                }
                var_35 = ((min((var_9), (((/* implicit */long long int) ((int) var_10))))) < (((/* implicit */long long int) min((-706576946), (((/* implicit */int) var_16))))));
                var_36 = ((/* implicit */int) min((((((((/* implicit */_Bool) 7255107239917216446LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) % (arr_3 [i_3]))), (((/* implicit */long long int) (-(arr_23 [i_3] [i_3] [i_4]))))));
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) var_4);
}
