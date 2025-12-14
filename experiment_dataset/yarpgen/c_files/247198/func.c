/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247198
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)70)) >> (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */_Bool) (signed char)66);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)223)) & (((/* implicit */int) (signed char)96)))) >= (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 = (~(((((-230472247) + (2147483647))) >> (((((/* implicit */int) (short)27744)) - (27723))))));
                            arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min(((signed char)81), ((signed char)-74))), (((/* implicit */signed char) ((_Bool) arr_3 [i_0] [i_0] [i_0])))))) & (min(((-(arr_4 [i_0] [i_3]))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                            var_21 = ((/* implicit */unsigned char) 1643243958);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_15 [(signed char)3] [(signed char)3] [i_0] [i_5] = ((/* implicit */unsigned char) max((((4294967280U) | (605140992U))), (((/* implicit */unsigned int) min(((_Bool)1), (((((/* implicit */_Bool) (signed char)81)) || (((/* implicit */_Bool) (short)-1)))))))));
                        var_22 = ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_0 [i_1 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 354818406))) || (((/* implicit */_Bool) (short)26289)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)96))));
                                arr_23 [i_7] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)70);
                                arr_24 [i_0] [i_0] [i_4] [i_6] [i_0] [i_6] [i_7] = ((/* implicit */unsigned int) (signed char)-118);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & ((+(((/* implicit */int) (unsigned char)109))))))), (min((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-460680406)))), (max((((/* implicit */unsigned int) (short)26346)), (1724986422U)))))));
                }
                for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((4294967295U), (((/* implicit */unsigned int) arr_2 [i_0])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))))))));
                    var_25 = ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) arr_11 [i_0])))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) & (((/* implicit */int) (_Bool)0))))));
                    var_26 = ((/* implicit */signed char) ((((((int) -1643243958)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)23)))))));
                    var_27 = ((/* implicit */unsigned char) arr_26 [i_0] [i_1 - 2] [i_8] [i_0]);
                }
            }
        } 
    } 
}
