/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216963
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) (short)-2339))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) -6530365492415097432LL);
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)63))));
                    var_19 = ((arr_7 [i_0] [i_0] [i_0]) % (arr_7 [i_0] [i_1] [i_2]));
                }
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */long long int) (!(var_5)))), (((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))))))));
                    var_20 *= ((/* implicit */signed char) min((((/* implicit */long long int) (short)27961)), (24LL)));
                    arr_14 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2339))) + (var_12)))), (arr_0 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)65535))) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) ((unsigned short) (unsigned short)12068))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_18 [13U] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4] [i_4])) ? (260046848LL) : (arr_7 [i_0] [i_1] [12])))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((~(var_13))), (((/* implicit */long long int) min((((/* implicit */signed char) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                    var_21 = ((/* implicit */long long int) var_17);
                    arr_20 [i_1] [7] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))), (arr_16 [11U] [i_1])));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_4]) | (var_13)))) ? (((((/* implicit */int) (!(arr_6 [i_0] [i_0] [i_0])))) * (((/* implicit */int) var_16)))) : (((((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4])) && (((/* implicit */_Bool) arr_3 [i_4])))))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (signed char)85))));
                    var_24 = ((((/* implicit */_Bool) arr_22 [i_5] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])));
                    arr_23 [i_1] &= ((/* implicit */long long int) ((signed char) var_0));
                    arr_24 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) && (((/* implicit */_Bool) var_16))));
                }
                var_25 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1]))) * (10243660280240429472ULL))), (min((arr_16 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1] [i_1])))))))));
                var_26 &= ((/* implicit */short) ((signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) * (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_15 [8] [8] [i_0] [8])) : (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_7);
}
