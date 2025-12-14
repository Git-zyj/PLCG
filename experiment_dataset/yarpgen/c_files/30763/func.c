/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30763
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (signed char)-103)))))) ? (((((/* implicit */_Bool) (unsigned short)65316)) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (17388435389388994465ULL) : (((/* implicit */unsigned long long int) 1285265615)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) -1))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */short) (+((-(min((((/* implicit */int) (unsigned short)65533)), (-1285265628)))))));
                        var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)124)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)44)) || (((/* implicit */_Bool) (unsigned short)9)))))))), (min((min((((/* implicit */unsigned long long int) (signed char)44)), (18320918883227106866ULL))), (((/* implicit */unsigned long long int) var_1))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 14127146211415860445ULL)) ? (-1285265619) : (arr_7 [i_0] [i_1] [i_4]))), (((int) arr_1 [i_2] [i_1]))))) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (_Bool)0))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1285265595)) ? (((/* implicit */int) (short)-28388)) : ((-(min((((/* implicit */int) (unsigned char)1)), (-1285265612)))))));
                        }
                        arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3]);
                    }
                    arr_15 [i_0] [i_1] = ((/* implicit */int) arr_0 [i_2] [i_1]);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (11323856154554091062ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7240))))))))));
        var_16 = ((/* implicit */unsigned long long int) 3938319443U);
    }
    var_17 += var_7;
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (short)-3087)))) : (((/* implicit */int) (unsigned char)210)))))));
}
