/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20490
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
    var_15 = ((/* implicit */unsigned short) 16228748445767846449ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_2))))));
        arr_2 [8U] [8U] &= ((/* implicit */_Bool) arr_0 [6LL]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) var_8);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = 3995625986U;
                        arr_14 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 299341319U)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_1]))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2]))));
                            var_20 -= ((/* implicit */unsigned char) ((arr_18 [i_1]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_18 [i_1]))));
                        }
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_21 [(signed char)16] [i_2] [i_3] = ((/* implicit */unsigned short) arr_9 [i_6 - 1] [13U]);
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */unsigned long long int) ((long long int) 140323748156996100ULL))) : (2217995627941705166ULL)));
                            arr_22 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_6] [i_6] [i_3] [i_3] [i_2] [(_Bool)1])) + (175656254)));
                        }
                        for (signed char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            arr_26 [13U] [i_2] [i_3] [13U] [(short)16] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (signed char)-46)) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))))));
                            arr_27 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [(_Bool)1] [i_4] [i_7 + 1] [i_2] [i_4] [i_7])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_20 [i_7 - 1] [i_7] [i_7] [i_7 + 2] [i_7 + 1]))));
                            var_22 ^= ((/* implicit */unsigned long long int) var_0);
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) % (var_11))))));
    }
    /* vectorizable */
    for (signed char i_8 = 3; i_8 < 16; i_8 += 4) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)29156))))) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) arr_5 [i_8 - 1]))));
        var_24 += ((/* implicit */long long int) (~(4203291165U)));
        arr_33 [(signed char)4] |= ((((/* implicit */_Bool) 4986486247287035121LL)) ? (var_11) : (((/* implicit */unsigned int) 175656236)));
        arr_34 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8])) ? (arr_24 [15ULL] [i_8] [i_8]) : (((/* implicit */unsigned long long int) -785070023))))) ? (((/* implicit */unsigned long long int) var_13)) : (((arr_24 [4U] [i_8] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (long long int i_11 = 2; i_11 < 24; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */int) ((3692829215U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))))) : ((+(((/* implicit */int) (unsigned short)32767))))))) - (((unsigned int) max((((/* implicit */int) (short)192)), (-885100125))))));
                    var_26 &= ((/* implicit */signed char) ((long long int) max((4096931978U), (arr_35 [i_11 - 2]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)112)), (2578086485U)));
}
