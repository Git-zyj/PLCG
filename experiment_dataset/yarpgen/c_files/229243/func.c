/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229243
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
    var_19 = ((/* implicit */short) max((((int) (+(((/* implicit */int) (_Bool)1))))), (((/* implicit */int) ((unsigned short) 1020U)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= min((max((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) (_Bool)1))))), (arr_5 [12LL]))), (min((826283500), (912263390))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) 1294768108U);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) min((((unsigned long long int) ((arr_8 [i_2]) ? (4294967278U) : (((/* implicit */unsigned int) 226691778))))), (((((/* implicit */_Bool) 15955128831505317284ULL)) ? (arr_12 [i_3 + 2] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2]))))))))));
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_3 + 1]))))), (((unsigned int) arr_13 [i_3 + 2] [i_3 - 2] [i_3 - 2]))));
                    var_23 = ((/* implicit */int) arr_8 [i_2]);
                }
            } 
        } 
        var_24 *= ((/* implicit */_Bool) (~(max((arr_10 [i_2] [i_2]), (arr_10 [i_2] [i_2])))));
        arr_14 [15] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((int) 119122925)), (119122925))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned short) (+(arr_7 [i_2] [i_2])))))));
            var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) min((arr_10 [i_2] [i_2]), (((/* implicit */int) arr_8 [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (arr_9 [i_5] [i_5] [i_2]) : (arr_7 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (min((((/* implicit */unsigned int) (unsigned char)197)), (4294967269U)))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            {
                var_28 ^= ((/* implicit */long long int) (+(((/* implicit */int) (short)17435))));
                arr_22 [i_7] = (+(((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
