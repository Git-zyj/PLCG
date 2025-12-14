/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50828
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
    var_17 = ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */short) ((unsigned int) max((var_12), (((/* implicit */long long int) ((unsigned int) var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_10 [(unsigned short)10] [i_0] = ((/* implicit */_Bool) arr_2 [(signed char)12]);
                    arr_11 [i_2] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1 + 4]), (((/* implicit */long long int) arr_8 [i_1] [i_0]))))) ? (((/* implicit */int) ((-1) == (((/* implicit */int) arr_0 [i_0] [9LL]))))) : (((/* implicit */int) ((signed char) (unsigned short)23784)))))), (arr_6 [i_2] [i_0])));
                }
                for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_1 + 2] [(unsigned short)17]), (arr_6 [i_1 + 2] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_1 + 2] [i_3 - 3]) >= (arr_7 [i_1 + 4] [i_3 - 3]))))) : (((((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */unsigned int) arr_8 [i_3] [i_0])) : (3544967342U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_7 [(unsigned short)16] [i_1])))))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [19LL])) ? (4418317136689429508ULL) : (((/* implicit */unsigned long long int) var_14))))))));
                    var_20 -= ((/* implicit */short) min((-18014398509481984LL), (((/* implicit */long long int) -11))));
                    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_3 - 2])) && (((/* implicit */_Bool) (unsigned char)251)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_3])) && (((/* implicit */_Bool) arr_1 [i_1])))) && ((!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_3 - 2])), (6291456)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 4] [i_3])) : (((/* implicit */int) arr_4 [i_3]))))))))));
                }
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    arr_17 [i_4] [i_1] = ((/* implicit */int) arr_12 [i_4] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0]);
                                arr_23 [19] [19] [19] [i_4] [i_4] [19] [i_6 - 2] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_12 [i_1] [i_1 + 2] [i_1 + 2])))) < (min((((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_4]))), (arr_13 [i_4])))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 + 1]))))) ? (((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_21 [2ULL] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((short) arr_19 [i_1 + 4]))))))));
                var_24 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */long long int) 1891934174)) : (arr_6 [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0]))))) ? (max((((/* implicit */unsigned long long int) -1918829652)), ((+(arr_15 [i_0] [i_0] [i_1] [i_1]))))) : (9390485606756569653ULL)));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_15 [i_1 + 4] [i_0] [i_0] [i_0]))));
                arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [16ULL] [i_1 + 2] [i_0])))))));
            }
        } 
    } 
}
