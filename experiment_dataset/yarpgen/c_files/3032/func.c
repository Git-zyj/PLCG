/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3032
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
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (min(((-(var_11))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -7976151933911874882LL))))))) : (((/* implicit */long long int) (-((-(var_17))))))));
    var_21 = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_9 [i_2] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4611650834055299072ULL)) ? (4611650834055299067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((-813715190), (((/* implicit */int) (_Bool)0)))))))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (max((2357706299021019513ULL), (((/* implicit */unsigned long long int) (unsigned char)126)))) : (max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2])), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_2]))))) - (max((((/* implicit */unsigned long long int) arr_8 [i_3] [i_1] [i_2] [i_3])), (arr_7 [i_0] [i_0] [i_1] [i_0] [i_3]))))))))));
                        var_23 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1 + 3])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 4]))))) | (min((((/* implicit */long long int) arr_3 [i_2 + 1] [i_3 - 3] [i_1 - 2])), (max((((/* implicit */long long int) arr_2 [i_3])), (arr_6 [i_0] [i_2] [i_3]))))));
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0] [4LL] [i_0])))) ? (((/* implicit */long long int) ((-5) | (((/* implicit */int) (unsigned char)4))))) : (arr_6 [i_1 - 1] [(unsigned char)2] [i_3 + 1])))) ? ((((!(((/* implicit */_Bool) (unsigned char)243)))) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))) : (((/* implicit */int) arr_0 [i_0]))));
                        arr_10 [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) -11)) ? (2913328316890305683ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (long long int i_5 = 4; i_5 < 15; i_5 += 4) 
            {
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_12 [i_5] [i_4])))) ? (((/* implicit */int) max(((unsigned char)129), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) arr_2 [i_5 - 1]))))) ? ((-(((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_15 [i_5])))))) : (((/* implicit */int) (((-(((/* implicit */int) arr_2 [i_0])))) == ((-(((/* implicit */int) (_Bool)1)))))))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max(((-(min((((/* implicit */long long int) arr_5 [i_5] [i_5] [i_5])), (arr_13 [i_0] [i_4]))))), (max(((~(arr_6 [i_0] [i_5] [i_5]))), (arr_13 [i_5] [i_5 - 4]))))))));
                    var_27 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (arr_6 [i_4] [i_5] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
    }
}
