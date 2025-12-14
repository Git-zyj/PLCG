/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204120
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
    var_15 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50644)) ? (1916443426U) : (((/* implicit */unsigned int) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (var_11) : (2378523886U)))))) && (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((2378523873U) | (((max((var_9), (((/* implicit */unsigned int) var_3)))) >> (((((/* implicit */int) (unsigned short)21052)) - (21025)))))));
                arr_6 [(unsigned char)7] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21052)) / (arr_0 [i_1])))), (min((2378523886U), (((/* implicit */unsigned int) (unsigned short)44483))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((2378523886U), (((/* implicit */unsigned int) (unsigned char)59))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)5))) ? (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) : (arr_14 [i_2] [i_3] [i_4 + 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2378523882U)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [(_Bool)1]))) ^ (arr_15 [i_3] [i_3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((int) (-(arr_7 [i_4 + 4]))));
                                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)4))) < (min((((/* implicit */long long int) 2378523870U)), (max((((/* implicit */long long int) (signed char)-5)), (var_0)))))));
                                var_20 ^= ((/* implicit */unsigned long long int) (-(max((arr_15 [i_6] [i_4 - 1]), (((/* implicit */unsigned int) arr_16 [i_2] [i_4 + 3] [4]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) 8725996553226443351LL);
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 2378523865U)) ? (1916443426U) : (2378523865U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1916443413U)), (var_1)))) || (((/* implicit */_Bool) (unsigned short)21052)))))));
        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) min((max((((/* implicit */long long int) var_4)), (-8725996553226443352LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32097)) ? (var_12) : (((/* implicit */int) var_7))))))));
    }
}
