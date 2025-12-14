/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225012
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (short)-27310)) : (((/* implicit */int) (short)27309)))) / (((/* implicit */int) (signed char)-11))));
                arr_6 [i_0] [(short)8] |= ((/* implicit */short) (~(-1918834111)));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2817169145018006060LL)))))))) ? ((+(((/* implicit */int) ((short) -3651931973791250504LL))))) : (((/* implicit */int) var_4))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3651931973791250503LL)) + (15323173683315683399ULL))))));
                    arr_12 [i_1] [(unsigned short)4] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)14308))) ? ((+(((/* implicit */int) arr_10 [i_0 + 3] [i_1] [i_1] [i_0 + 3])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (arr_4 [i_2 + 1] [i_2 - 1]))))));
                                var_15 = ((/* implicit */short) -1LL);
                                var_16 = ((/* implicit */short) min((((/* implicit */int) arr_10 [21U] [i_1] [(unsigned short)3] [21U])), (((((/* implicit */int) arr_0 [i_3])) | (((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (-(max((9127389860447237479ULL), (((/* implicit */unsigned long long int) -1099511627776LL))))));
                    arr_26 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2594228598661976637LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27309))) : (-1LL)));
                    arr_27 [i_5] [i_5] = ((/* implicit */unsigned int) (+(-1LL)));
                }
            } 
        } 
    } 
    var_18 = (short)27309;
}
