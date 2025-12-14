/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204009
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
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18223904062898501324ULL))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)57595)))) : (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (18223904062898501324ULL)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))), (var_0)))) : (var_7)));
                            arr_14 [i_3] [(unsigned char)4] [i_2] [(signed char)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (short)-32755)) : (((((/* implicit */_Bool) (short)-4266)) ? (((/* implicit */int) (short)-11511)) : (((/* implicit */int) (signed char)127))))))) ? (min((18446744073709551592ULL), (((((/* implicit */_Bool) var_13)) ? (var_2) : (arr_1 [i_0 - 3] [i_0 - 3]))))) : ((((+(3ULL))) >> (((arr_5 [i_1] [i_1]) - (11919758456983273421ULL)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) 8061046331017211826ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_21 [(unsigned char)19] [i_5] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_16)), (arr_12 [i_1] [i_1] [i_4] [i_5]))))));
                            arr_22 [i_0] [i_5] [i_5] [i_4] [(unsigned char)17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((!(((/* implicit */_Bool) (short)-25286)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_19 [i_5] [(unsigned char)22] [i_4] [i_4] [(unsigned char)22] [i_4]) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)24944)) - (24921)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (max((((/* implicit */unsigned int) (signed char)-49)), (4147757843U))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)17))))) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) (unsigned char)208)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)13245)))))))))));
    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | ((~(((/* implicit */int) var_15))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_13)))))) : (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((var_8), (((/* implicit */unsigned int) var_11)))))))));
}
