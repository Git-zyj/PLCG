/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220239
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) -200677745736185831LL);
            var_16 = max(((~(arr_1 [i_0]))), (var_8));
        }
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)89))));
        var_18 = ((/* implicit */long long int) var_7);
    }
    var_19 = ((/* implicit */unsigned int) var_14);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_13)) <= (min((((((/* implicit */_Bool) -200677745736185842LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (200677745736185830LL))), (((/* implicit */long long int) min((((/* implicit */short) (signed char)102)), (var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */int) (-(var_4)));
                var_22 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_0)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (-3944132165681931738LL))))) : (arr_6 [i_4] [i_4]))), (((/* implicit */unsigned long long int) arr_9 [i_4 - 1]))));
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (arr_4 [i_4 - 2])))) : (min((arr_8 [i_4] [i_4]), (((/* implicit */unsigned long long int) -200677745736185842LL)))))) & (((arr_8 [i_4] [i_4 - 1]) | ((~(var_4)))))));
        var_25 = ((/* implicit */int) var_14);
        var_26 = ((/* implicit */unsigned char) arr_0 [i_4 - 1]);
    }
}
