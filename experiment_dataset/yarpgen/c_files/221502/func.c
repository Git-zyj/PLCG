/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221502
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_15 += ((/* implicit */signed char) ((((/* implicit */int) (short)0)) % (((/* implicit */int) var_8))));
                        var_16 &= ((/* implicit */int) ((unsigned short) var_3));
                    }
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_15 [i_2] [i_1] [i_2] [i_4] [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (max((((/* implicit */unsigned long long int) 4294967295U)), (16278287714476586272ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) - (880569094)))) ? (((/* implicit */int) ((_Bool) (unsigned char)62))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)34139)))))))));
                            var_17 ^= ((/* implicit */signed char) ((min((var_0), (((/* implicit */unsigned int) (unsigned char)80)))) >> (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)24))))))));
                        }
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((-978570399382064869LL) & (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (signed char)76);
                        arr_19 [i_0] [i_6] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)0))))));
                        arr_20 [i_6] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((long long int) var_14)) | (3627623508453462683LL)));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (short)6396)) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (signed char)84)))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 16278287714476586272ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned short) (short)0)))));
                        arr_25 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47909)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (0U)));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 2147483647)), (2448377100U)))) | (max((7052928642005444596ULL), (((/* implicit */unsigned long long int) 2369269206596980027LL)))))));
                                arr_33 [i_9] [i_1] [7] [i_2] [i_1] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((signed char) (signed char)-42))) ? (-7092015184219209174LL) : (((long long int) 1023LL)))), (max((((/* implicit */long long int) (signed char)76)), (2369269206596980027LL)))));
                                arr_34 [i_0] [i_1] [i_2] [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (8210282327932375455LL) : (((/* implicit */long long int) -198516511)))), (0LL)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) -7092015184219209174LL);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        for (int i_11 = 4; i_11 < 23; i_11 += 2) 
        {
            {
                var_25 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)55192))) && (((/* implicit */_Bool) -2369269206596980027LL))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-36)) || (((/* implicit */_Bool) (unsigned short)128)))))))));
                arr_40 [i_11] = ((/* implicit */_Bool) (unsigned char)24);
                var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-100)) + (((/* implicit */int) (unsigned char)71))))) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)203)), (-880569095)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1414943851)) ? (350727285U) : (var_14))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19740)) >= (((((/* implicit */_Bool) (unsigned short)705)) ? (1611740438) : (((/* implicit */int) var_1))))))), (min(((~(4294967295U))), (((/* implicit */unsigned int) ((int) (signed char)-3)))))));
}
