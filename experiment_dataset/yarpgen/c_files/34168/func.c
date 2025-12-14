/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34168
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) var_9)) ? (max((min((((/* implicit */unsigned long long int) arr_0 [i_1])), (1499658540631524638ULL))), (((/* implicit */unsigned long long int) ((short) (short)31572))))) : (((/* implicit */unsigned long long int) (-(((arr_0 [i_1]) % (5857778934143362839LL)))))));
                arr_5 [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (8814295412101658339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_12 = ((/* implicit */unsigned short) (+(-5857778934143362840LL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 6; i_3 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((((int) ((16947085533078026978ULL) % (((/* implicit */unsigned long long int) var_0))))), (min((((/* implicit */int) (unsigned char)32)), ((-(((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) var_4);
                            var_15 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                            arr_16 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 965791301)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)220))));
                            var_16 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2 + 3] [i_5] [i_2 + 3] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((short) 134217472));
    var_18 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
}
