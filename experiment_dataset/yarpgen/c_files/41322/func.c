/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41322
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
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_3)))))) - (max((4294967286U), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), ((unsigned short)0)))))));
                var_10 |= ((((/* implicit */_Bool) ((unsigned short) min(((short)25228), ((short)-25233))))) ? (arr_0 [i_0 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21)) ^ (((((/* implicit */int) var_8)) | (((/* implicit */int) (short)25211))))))));
                var_11 = ((/* implicit */long long int) min((var_11), (8685994594915401735LL)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */_Bool) var_8);
                    arr_11 [8U] = arr_4 [i_0 - 2] [i_0] [i_0 - 2];
                    var_13 = ((/* implicit */int) var_0);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [6ULL] [i_1] [i_2] [i_3] = ((/* implicit */int) ((unsigned long long int) -9LL));
                        arr_15 [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) -260201015)) : (var_2)))) ? (arr_12 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (4294967295U)))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_2] = ((((/* implicit */int) arr_13 [i_0 - 2] [0U] [i_2] [i_3] [14LL])) == (var_3));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_4 + 2])) ? (arr_2 [i_0 - 1] [i_4 + 2]) : (arr_2 [i_0 - 1] [i_4 + 2])));
                            arr_21 [i_0] [i_0] = ((/* implicit */long long int) ((5758746965817051200LL) == (9223372036854775797LL)));
                        }
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_15 = ((((/* implicit */int) ((short) var_6))) << (((arr_12 [i_5 + 3] [i_5 + 2] [i_5 + 2] [i_5 + 1]) - (15196115376340106125ULL))));
                            var_16 = ((/* implicit */int) var_9);
                            var_17 = ((/* implicit */_Bool) var_3);
                            arr_24 [i_0] [(unsigned char)18] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 744550537098680494LL)) ? (((/* implicit */long long int) 3249392775U)) : (-5LL)));
                        }
                        for (int i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            var_18 = ((short) arr_16 [i_6 - 1]);
                            arr_27 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_6 - 1]);
                        }
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) var_3);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_9 [i_0] [0U] [0U])) * (((((/* implicit */_Bool) var_7)) ? (4078312502869160773ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))));
                    arr_30 [i_0] [i_0] [i_7] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */long long int) arr_19 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) + (((min((-9223372036854775806LL), (((/* implicit */long long int) 4294967287U)))) - (min((((/* implicit */long long int) arr_29 [i_0])), (-9223372036854775801LL)))))));
                    var_22 = min((((unsigned int) ((unsigned int) var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_26 [i_8] [i_1])) : (((/* implicit */int) ((((/* implicit */long long int) var_3)) < (-9223372036854775797LL))))))));
                }
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) var_9);
    var_24 = ((/* implicit */_Bool) ((unsigned int) var_6));
    var_25 = var_0;
}
