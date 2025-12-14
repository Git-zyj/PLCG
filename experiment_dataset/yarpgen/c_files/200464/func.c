/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200464
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-17136))) / (var_5))) : (((((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        var_11 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((unsigned char) (short)5058))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)14064))))) : (arr_10 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-6467700984236138515LL)))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_0)) : (1028436831085836106ULL))))))));
                        arr_13 [i_0] [i_0] [5] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2583411545U)) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) ((unsigned short) -89168902))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 89168909)))) : (((var_8) & (((/* implicit */long long int) -387189517))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_0] = (unsigned short)65535;
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_4] [i_0 - 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)5060)), (((((/* implicit */unsigned long long int) var_9)) - (arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2])))));
                            arr_19 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) max((1782634861), (((/* implicit */int) ((signed char) (short)17136)))));
                        }
                        var_12 = ((/* implicit */short) ((unsigned int) (short)16384));
                        arr_20 [i_0] [i_1] [8LL] [8LL] [i_3 + 1] = ((/* implicit */long long int) var_1);
                    }
                    for (int i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        var_13 = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned long long int) 3052462476U)), (17537583738235785956ULL))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-16384);
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_0))));
}
