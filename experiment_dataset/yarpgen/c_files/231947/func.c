/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231947
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((int) (short)-6936))) ? ((-(((/* implicit */int) (signed char)108)))) : (((/* implicit */int) max(((signed char)-108), (((/* implicit */signed char) arr_1 [i_0]))))))) | ((~((~(((/* implicit */int) (signed char)122))))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (short)-6936)) : ((+(((/* implicit */int) (unsigned char)73))))));
                            arr_8 [i_3] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)-122))))));
                            arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -1561689439)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6))))))) : (min((min((393671305), (((/* implicit */int) (signed char)108)))), (((/* implicit */int) arr_2 [i_0]))))));
                            arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) * (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) ((short) var_10)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 678365813)) ? (((/* implicit */int) (unsigned short)5707)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (min((((/* implicit */unsigned short) (signed char)-108)), ((unsigned short)59829))))))));
                var_17 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [4] [(signed char)11])))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_10);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_10)) - (var_6)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : ((((-(4ULL))) + (((/* implicit */unsigned long long int) (-(-1733594276))))))));
    var_20 = ((/* implicit */unsigned short) -393671307);
    var_21 = ((/* implicit */unsigned short) var_13);
}
