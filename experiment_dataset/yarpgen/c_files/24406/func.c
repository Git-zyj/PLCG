/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24406
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) var_14);
                var_16 = (-(((/* implicit */int) min((max(((unsigned short)1784), (((/* implicit */unsigned short) (unsigned char)255)))), ((unsigned short)9625)))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)225)))) | (((((/* implicit */_Bool) (unsigned short)55894)) ? (-1421634599) : (((/* implicit */int) (unsigned char)255)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((var_9) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1759)))))))) ? (((/* implicit */int) ((_Bool) ((18446744073709551602ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) : (1414224900))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)20178), (((/* implicit */unsigned short) (short)(-32767 - 1))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 + 1] [i_3] [i_2 + 1])) ^ (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned short)9625))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_10))))))) : ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_2 - 1])) : (((/* implicit */int) arr_14 [i_2 + 1]))))));
                            var_21 = ((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)55910), (((/* implicit */unsigned short) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
