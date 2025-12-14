/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25051
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
    var_14 = ((/* implicit */_Bool) max((max((((13294277511604268168ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned long long int) max((-3LL), (((/* implicit */long long int) (unsigned char)0))))))), (((/* implicit */unsigned long long int) ((unsigned int) (+(13LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (max(((unsigned short)0), ((unsigned short)53147)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)241))))) ? (((/* implicit */int) ((var_13) <= (var_13)))) : ((~(arr_5 [i_0] [i_1] [i_3])))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36424)) - (((/* implicit */int) (signed char)110))))) + (max((((/* implicit */unsigned long long int) 2739697845U)), (var_4)))))));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((unsigned short) var_8))), ((~(arr_9 [i_3]))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) (short)-1)) & (((/* implicit */int) (unsigned short)53147)))))))));
                                arr_15 [i_4] [i_1] [i_3] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */long long int) max(((+(((/* implicit */int) ((unsigned short) var_10))))), (max((((947356745) / (arr_5 [i_3] [i_1] [i_0]))), (((/* implicit */int) ((arr_9 [i_3]) == (((/* implicit */unsigned int) var_3)))))))));
                                arr_16 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_9))))) != ((~(((/* implicit */int) var_5))))))), (max((((unsigned int) var_11)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (arr_7 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned char) ((short) ((13203520788011905611ULL) != (((/* implicit */unsigned long long int) 0U)))));
                            var_16 ^= ((min((((/* implicit */long long int) max(((unsigned char)0), (((/* implicit */unsigned char) var_11))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) + (var_7))))) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14300))) > (32767U)))), (max((var_5), (((/* implicit */unsigned short) var_9)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
