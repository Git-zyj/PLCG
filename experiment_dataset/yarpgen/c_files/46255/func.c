/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46255
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -870687415311485427LL))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1])) == (((/* implicit */int) arr_3 [i_0 - 1])))))));
            var_21 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)8496)), (870687415311485426LL)));
            arr_6 [i_0 - 2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((8955792475524146785LL), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))), (0ULL)));
            var_22 = ((/* implicit */short) max((arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 3]), (max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))));
            arr_7 [i_0] [1ULL] [10U] = ((/* implicit */short) min((max((((/* implicit */unsigned int) arr_5 [i_0 + 1])), (min((((/* implicit */unsigned int) var_7)), (3147057281U))))), ((-(max((((/* implicit */unsigned int) (_Bool)1)), (1394455462U)))))));
        }
        var_23 = ((/* implicit */unsigned short) (short)25061);
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned short i_3 = 4; i_3 < 15; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_24 = var_8;
                    var_25 *= ((/* implicit */short) ((max((1756816376717374275ULL), (((/* implicit */unsigned long long int) 2485574141U)))) & (((/* implicit */unsigned long long int) 1394455462U))));
                    var_26 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_12))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (2147483647)))))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), (var_0))))));
                }
            } 
        } 
    } 
}
