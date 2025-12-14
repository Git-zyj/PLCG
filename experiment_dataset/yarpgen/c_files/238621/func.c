/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238621
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6519412888047710965LL)) ? (((/* implicit */unsigned long long int) -220015974)) : (18ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)52059)));
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_11 [i_0] [i_1] [i_2] [i_3] [0ULL]))) ? (((/* implicit */unsigned int) -220015974)) : ((-(arr_0 [i_0] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_4]))))) : (min((((/* implicit */int) arr_6 [i_4] [i_3] [i_2] [i_1])), (max((127661581), (((/* implicit */int) var_5))))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) || ((_Bool)1)))) * (((/* implicit */int) max((max((((/* implicit */unsigned char) (signed char)107)), ((unsigned char)207))), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) > (-6519412888047710966LL)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
                            {
                                arr_19 [i_0] [(signed char)4] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)5)) << (((((/* implicit */int) (signed char)40)) - (12)))));
                                arr_20 [i_0] [i_1] [(unsigned short)20] [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [17] [i_1] [i_5] [i_6] [i_7] [i_0] [i_7 - 1]))))), (var_9)));
                            }
                            for (unsigned int i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                                arr_24 [i_6] [i_1] [i_5] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)6048)) < (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 1])))))) : (2892418068U)));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                            {
                                arr_27 [i_0] [i_6] [(unsigned short)7] [i_6] [i_9] = ((/* implicit */long long int) 1612499198);
                                var_20 = -6519412888047710966LL;
                            }
                        }
                    } 
                } 
                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-6519412888047710966LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) max(((_Bool)1), (arr_17 [i_0] [(unsigned short)9])))))))));
                arr_28 [i_0] = ((/* implicit */unsigned int) ((long long int) arr_22 [i_0] [i_1]));
                var_22 = var_3;
            }
        } 
    } 
}
