/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46193
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
    var_13 &= ((/* implicit */unsigned long long int) max(((~(((int) 1563659335062541382ULL)))), (var_9)));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 1563659335062541397ULL)) ? (((/* implicit */int) min((((signed char) (short)-19502)), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4249607741U)))))))) : (((/* implicit */int) min((var_4), (max((((/* implicit */short) var_0)), ((short)19510))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] &= ((/* implicit */int) 3471518496U);
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(max((((/* implicit */unsigned int) (unsigned short)63402)), (4249607741U))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-12909))))) >= (((16883084738647010233ULL) % (((/* implicit */unsigned long long int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (arr_7 [i_4] [i_3] [i_2])))) ? (((16883084738647010244ULL) << (((((/* implicit */int) var_5)) + (21108))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))))))));
                                arr_17 [i_0] &= ((/* implicit */short) ((((/* implicit */int) (signed char)-97)) + (-17)));
                                arr_18 [i_0] [3U] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */short) min((((/* implicit */int) var_8)), (var_11)));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((min((((/* implicit */int) (short)1242)), (max((var_9), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */int) ((unsigned char) (+(var_9))))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) % (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-1108550241957238560LL))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((unsigned int) ((970282217) + (((/* implicit */int) (unsigned short)27862))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (~(((var_0) ? (((/* implicit */unsigned long long int) ((arr_10 [i_5] [i_5 + 1] [i_5] [i_5] [i_5]) / (var_11)))) : (((arr_15 [i_0] [i_0] [i_0] [15ULL] [15ULL]) >> (((/* implicit */int) arr_3 [i_0]))))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) ((short) var_0))) <= (((/* implicit */int) (((~(((/* implicit */int) var_10)))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [14] [14])) : (((/* implicit */int) (short)-19502))))))))))));
                    }
                }
            } 
        } 
    } 
}
