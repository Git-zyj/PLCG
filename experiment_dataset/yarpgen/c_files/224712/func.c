/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224712
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
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 347002352)) ? (((/* implicit */int) (short)-22773)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) min(((unsigned char)104), (((/* implicit */unsigned char) arr_0 [i_1])))))))) ? (min((((int) (signed char)-54)), (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 - 2])), ((short)14910)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) (signed char)-32)))) : (((/* implicit */int) arr_5 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3 - 1] = ((/* implicit */signed char) arr_4 [i_1] [i_2]);
                            var_13 = ((/* implicit */unsigned long long int) arr_8 [i_0 - 2] [i_0 + 4] [i_0] [i_0 + 2]);
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57846)) ? (-451332029) : (((/* implicit */int) (signed char)54))))) == (min((arr_9 [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 3]), (arr_9 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0])))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-50)) ? (2174983502U) : (((/* implicit */unsigned int) -1608802907))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) -8112732447571671699LL)) ? (((/* implicit */int) (short)0)) : (1292519605))))));
}
