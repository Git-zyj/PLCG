/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38869
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
    var_17 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((19U), (((/* implicit */unsigned int) var_15)))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), ((unsigned char)153)));
                            arr_10 [i_3] [4ULL] [(short)11] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)32746);
                            var_20 = ((/* implicit */signed char) var_15);
                            var_21 ^= ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (unsigned char)142)))), (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) ^ (19U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((1430181554061780810ULL) != (((/* implicit */unsigned long long int) -2832815614372202750LL))))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [(unsigned char)12] = ((/* implicit */unsigned long long int) max((3452387132499354506LL), (((/* implicit */long long int) (unsigned short)61850))));
                var_22 = ((/* implicit */unsigned short) (~(max((1729382256910270464ULL), (((/* implicit */unsigned long long int) 4294967275U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) max((((unsigned short) var_10)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
                            arr_21 [i_4] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */short) ((3452387132499354510LL) > (((/* implicit */long long int) max((19U), (((/* implicit */unsigned int) (short)31808)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) -862058975);
                var_25 = ((unsigned short) (unsigned char)145);
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 3) 
                {
                    for (short i_9 = 2; i_9 < 9; i_9 += 3) 
                    {
                        {
                            arr_27 [i_4] [i_8] [(short)5] [i_8 + 3] [(short)5] [i_9 + 4] = min((max((((/* implicit */unsigned long long int) -2026546703)), (var_11))), (((/* implicit */unsigned long long int) min((456017204U), (((/* implicit */unsigned int) var_1))))));
                            var_26 ^= ((/* implicit */unsigned long long int) var_9);
                            var_27 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
