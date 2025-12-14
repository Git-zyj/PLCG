/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206921
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_11 [(unsigned short)10] [i_1] [i_2] [i_3] [(unsigned short)10] = ((((/* implicit */int) var_9)) == (((arr_10 [i_3] [13ULL] [(unsigned short)0] [i_1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1] [i_1] [i_0 + 1])))));
                            arr_12 [i_3] [i_2 - 2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1])))))));
                            var_10 = ((/* implicit */unsigned short) ((5433158765659541533ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_9 [i_0] [i_0] [i_2] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
                var_11 *= ((/* implicit */unsigned int) 9367654602248039646ULL);
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) == (570261198152839920ULL)));
    var_13 = ((/* implicit */_Bool) ((unsigned short) 9079089471461511982ULL));
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned short) (unsigned short)19714))) == (((((/* implicit */int) (unsigned short)44107)) * (((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) min((1208234665U), (var_7)))) | (((unsigned long long int) var_5))))));
}
