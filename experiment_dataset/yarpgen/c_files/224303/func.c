/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224303
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [15] [i_0])))))));
        var_14 -= ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (-((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)64)) || (((/* implicit */_Bool) (short)-1)))))))));
                            var_16 = ((/* implicit */unsigned short) (unsigned char)250);
                            var_17 = ((/* implicit */short) min((6547478236413702175ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
                            var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) (_Bool)0)))));
                        }
                    } 
                } 
            } 
            var_19 *= ((/* implicit */unsigned long long int) var_12);
            var_20 -= ((/* implicit */signed char) max(((-(arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]))), ((+(arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 1])))));
        }
        for (signed char i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_5] [(unsigned short)4] [i_5] [i_5 - 3] [i_5 - 2] [i_5])) << (((((long long int) var_3)) - (476105691LL))))) << (((((arr_8 [i_5 - 1] [i_5]) | (arr_8 [i_5 - 1] [i_5 - 1]))) - (8405578704101968496ULL)))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((int) (short)(-32767 - 1))) % (((/* implicit */int) ((unsigned short) var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0] [i_5] [i_6 + 2] [i_7] [0]))))) ? (((/* implicit */int) (((_Bool)1) || (var_8)))) : (((/* implicit */int) (unsigned char)122))))) : ((-(max((((/* implicit */long long int) var_9)), (var_4)))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_11 [i_0] [i_5 + 1] [i_6 + 3] [i_7] [i_0] [i_6] [i_6 + 3]))));
                        arr_18 [i_0] = ((/* implicit */int) var_12);
                    }
                } 
            } 
        }
        for (short i_8 = 1; i_8 < 14; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        {
                            arr_30 [i_0] [i_8 + 1] [i_9] [i_9] [i_10] [i_11] &= (!(((/* implicit */_Bool) arr_20 [i_0] [i_8] [i_8 - 1])));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 0U))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_8] [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned char)158))))) ? (((/* implicit */unsigned int) var_2)) : (((3491311095U) % (arr_27 [i_0] [(_Bool)1] [i_8] [i_8] [(_Bool)1]))))), (((/* implicit */unsigned int) min((2147483646), (((/* implicit */int) ((signed char) (signed char)93))))))));
            var_26 -= (-(((/* implicit */int) (unsigned char)250)));
            arr_31 [i_0] [i_8 - 1] = ((/* implicit */unsigned char) ((16095768030947715982ULL) & (((/* implicit */unsigned long long int) 2147483646))));
        }
        var_27 = ((/* implicit */unsigned char) ((signed char) (+((+(((/* implicit */int) (_Bool)0)))))));
        arr_32 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) (((-(arr_1 [i_0]))) >= (((/* implicit */int) min((var_10), ((short)-7377))))))) : (((/* implicit */int) arr_25 [i_0] [(short)5] [i_0]))));
    }
    for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        var_28 &= ((/* implicit */_Bool) (+(((0U) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)250)) | (((/* implicit */int) (unsigned short)768)))))))));
        arr_36 [i_12] = ((/* implicit */_Bool) (((((((_Bool)0) ? (-8875921371700392432LL) : (((/* implicit */long long int) 36751469U)))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))))) / (((/* implicit */long long int) (-2147483647 - 1)))));
        var_29 = ((/* implicit */unsigned char) -4538801620128377454LL);
    }
    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
    {
        var_30 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) ((arr_38 [i_13]) != (((/* implicit */int) arr_37 [i_13]))))) : (((/* implicit */int) ((signed char) var_3)))))) ? (((((long long int) (_Bool)1)) & (max((((/* implicit */long long int) var_10)), (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_31 &= ((/* implicit */long long int) (+((~((-(((/* implicit */int) (unsigned char)169))))))));
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_5)) == (arr_38 [i_13]))))))))))));
        arr_40 [i_13] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_13])) && (((/* implicit */_Bool) arr_37 [i_13]))))), (max((arr_37 [i_13]), (arr_37 [i_13])))));
    }
    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
    {
        var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((unsigned short) arr_37 [i_14])))))));
        /* LoopNest 2 */
        for (signed char i_15 = 2; i_15 < 22; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                {
                    var_35 -= ((/* implicit */_Bool) ((min((((((/* implicit */int) arr_46 [i_14] [i_14] [i_14] [i_14])) + (-1404782890))), (min((1390856466), (((/* implicit */int) (unsigned char)155)))))) | (((((/* implicit */int) max(((unsigned char)249), (((/* implicit */unsigned char) (_Bool)0))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_16])) && (((/* implicit */_Bool) 2079382529288550546LL)))))))));
                    arr_48 [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) (unsigned short)14347))));
                    arr_49 [i_14] [i_14] [3U] [3U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)31)))) >> (((max((arr_44 [i_14] [i_14]), (arr_44 [i_14] [i_15 + 2]))) - (10195763724287212197ULL)))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)225))))) ? (((long long int) max(((unsigned short)53546), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_9)))) | (((/* implicit */int) var_8)))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (arr_56 [i_15 + 1] [i_15 + 2])))), (arr_45 [i_15 - 1] [i_15] [i_15] [i_15 + 1])));
                                arr_57 [(unsigned char)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_14] [i_14])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_53 [i_17] [i_18])) ? (((/* implicit */int) arr_42 [i_15] [i_17])) : (((/* implicit */int) (unsigned char)155)))) : (((2147483647) - (((/* implicit */int) (signed char)94))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_14] [i_15 - 2] [i_16] [i_15 - 2] [(signed char)9] [i_17])) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_52 [i_18] [i_18] [i_17] [i_16] [i_14] [i_14])))) : (((/* implicit */int) ((((/* implicit */int) arr_37 [i_14])) != (((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) min((arr_37 [i_15]), (arr_37 [i_15])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_50 [16ULL]))))) : (433886441U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_58 [i_14] = ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)0)), (3949885704885333577LL)));
    }
    var_38 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_12))));
    var_39 = ((/* implicit */short) var_12);
}
