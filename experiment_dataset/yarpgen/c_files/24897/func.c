/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24897
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_11 ^= ((/* implicit */unsigned char) ((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1])))));
            var_12 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_1] [i_1] [i_1 - 2]));
            var_13 = (short)4349;
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(-1)));
            var_14 -= ((/* implicit */unsigned char) (~(arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2] [(short)7]))));
        }
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(4294965248LL)))) ? ((~(3588005646U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [(short)6] [i_0]), ((unsigned char)206))))))) <= (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) arr_5 [4] [i_3] [4]);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17641612507514818506ULL)) ? (((/* implicit */unsigned long long int) arr_16 [i_7 - 1] [11U] [i_5] [i_7] [i_6 + 1])) : (805131566194733109ULL)));
                                arr_22 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((unsigned int) var_7));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_18 [i_3] [i_3] [i_4] [i_5] [i_6] [i_3]))) % (((/* implicit */int) (unsigned short)51280))));
                                var_19 = ((/* implicit */unsigned short) (~(805131566194733137ULL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((short) (signed char)-41));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [i_3]))));
    }
    var_22 = var_9;
    var_23 = ((/* implicit */unsigned char) var_5);
}
