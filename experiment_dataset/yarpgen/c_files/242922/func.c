/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242922
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)65529)) : (-1264594900)));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1264594909)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) -1)) - (0LL)))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) > (max((((/* implicit */int) ((723386669) < (((/* implicit */int) arr_2 [i_0]))))), (((272206837) - (((/* implicit */int) (unsigned short)65535))))))));
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)6))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max(((~(arr_9 [i_0] [i_2] [i_3]))), (((/* implicit */long long int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)1023)))) > ((~(((/* implicit */int) (unsigned short)1))))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) + (var_8)))), (((((/* implicit */long long int) 571134241)) | (0LL)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) min((arr_11 [i_1] [i_1] [i_1] [i_0]), (arr_11 [i_0] [18LL] [i_0] [i_0])))) >> (((((((/* implicit */_Bool) (signed char)52)) ? (var_6) : (((/* implicit */int) var_3)))) - (1686082386))))))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_22 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (27) : (((/* implicit */int) (unsigned short)53962))))) ? (min((((/* implicit */int) (_Bool)0)), (arr_8 [i_4 + 1] [i_4] [i_5 - 3]))) : (((arr_8 [i_4 + 1] [11] [i_5 + 1]) / (arr_8 [i_4 - 1] [i_4 - 1] [i_5 + 2]))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)-27528)), (arr_8 [i_0] [(_Bool)0] [i_4 - 1])))) : (min((var_8), (((/* implicit */unsigned int) arr_1 [i_0]))))));
                            arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) (((+(((/* implicit */int) var_1)))) >> (((((/* implicit */int) (unsigned short)63)) - (39)))));
                            arr_21 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
