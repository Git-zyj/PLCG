/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223968
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
    var_14 = ((/* implicit */unsigned char) (-(17451448556060672ULL)));
    var_15 |= ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */signed char) (((((_Bool)1) && (arr_3 [i_1]))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_7 [(unsigned short)9] [i_2 - 1])), (min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)70)))))) ? ((((+(((/* implicit */int) arr_1 [(unsigned short)10])))) % (((/* implicit */int) ((signed char) arr_1 [i_0]))))) : (((/* implicit */int) (_Bool)1))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] [(short)14] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                            arr_13 [i_3] [(short)15] [i_3] [(unsigned short)9] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1])), (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) arr_6 [2LL] [7])) : (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max(((signed char)35), (arr_17 [i_0] [i_0] [i_4] [i_0] [i_4])));
                            var_18 = var_9;
                        }
                    } 
                } 
            }
        } 
    } 
}
