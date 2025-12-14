/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229557
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
    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (short)-9941))), (var_13)))) : (((/* implicit */int) var_0))));
    var_21 *= ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_5)))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)36))))), (((unsigned long long int) (short)-28245)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_8 [5U] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_2);
                            arr_9 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_2 - 2] [i_0 + 2]) >> (((arr_4 [i_2 - 4] [i_0 - 1]) - (7679381710289214519ULL)))))) ? (((arr_0 [i_2 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))) : ((-(arr_0 [i_2 - 2])))));
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9541762740049410399ULL)) ? (((/* implicit */int) (short)9962)) : (((/* implicit */int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned char) (_Bool)1)))))))), (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (arr_3 [i_2 - 2] [i_2]))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (-1177664331))))))));
                            var_23 = ((/* implicit */short) var_11);
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) ((unsigned int) arr_0 [7U]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [(short)10] [i_0 + 3])))))) : (arr_0 [i_0])))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */_Bool) max((((/* implicit */long long int) (+(max((631236472U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))), (((arr_7 [i_0] [i_0] [i_0 - 3] [i_0] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3])))))));
                arr_10 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 3] [i_0 - 1])), (94753313106508332ULL)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((var_10) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9952)))))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (signed char)-20)) | (var_6)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */long long int) var_13)), (var_3)))))));
}
