/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20488
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
    var_18 |= 1646363446;
    var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((1646363437), (1646363445)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4540933763378159451ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned long long int) (((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) ((signed char) var_2))) + (135))))) < (((/* implicit */int) max((((short) 1740884764U)), (((/* implicit */short) (!(((/* implicit */_Bool) var_12))))))))));
                var_21 -= ((/* implicit */unsigned int) (((~((~(((/* implicit */int) (unsigned short)22177)))))) / ((+(arr_2 [i_0] [i_1 - 1])))));
                var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((-1646363444) < (((/* implicit */int) var_16))))) <= (-564528481)))) <= (((/* implicit */int) ((signed char) var_12)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        arr_14 [i_2] [i_3] [i_4] [i_2] [(unsigned short)18] [i_2] |= ((/* implicit */signed char) arr_10 [(unsigned char)14] [i_3] [i_2]);
                        var_23 += ((/* implicit */_Bool) arr_4 [i_3] [(signed char)11]);
                        arr_15 [i_2] [i_3] [i_3] [i_5] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_16))) <= (((/* implicit */int) ((unsigned short) 2147483644)))));
                        arr_16 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) var_11);
                    }
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((16ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) (-(arr_13 [i_2] [i_3] [i_3] [i_3])))) : (5773214423677386549ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29168)))))));
                    var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)80)) ? (2147483637) : (((/* implicit */int) (signed char)-97)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) ((unsigned char) (unsigned char)243));
}
