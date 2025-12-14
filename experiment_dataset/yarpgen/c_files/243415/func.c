/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243415
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
    var_16 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((unsigned int) max((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)96)), (4294967290U)));
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_6 [i_1]))) ^ (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) var_11))))));
                }
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((/* implicit */int) ((max((var_8), (((/* implicit */int) arr_6 [i_1])))) < (max((var_12), (((/* implicit */int) (short)10129))))))))))));
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned char)142))));
                    var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_3]))))), (((((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */short) var_10))))) ? (max((var_4), (((/* implicit */unsigned int) (unsigned char)248)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)168)), (arr_1 [i_3])))))))));
                    var_21 -= ((/* implicit */unsigned int) (unsigned char)81);
                }
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) (-(-615370297)));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_1] [i_1]))))));
                    arr_15 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_11);
                }
                for (int i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    arr_18 [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) (unsigned char)84);
                    arr_19 [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)22);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) var_3);
                                arr_28 [i_1] [i_5 + 1] [i_0] [i_7 - 1] = ((/* implicit */short) max((((/* implicit */int) max((arr_25 [i_7] [i_7] [1ULL] [i_7] [i_7 - 1] [i_7]), (arr_25 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1])))), ((+(-680153966)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
