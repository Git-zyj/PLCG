/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244681
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned short)15865)))))) ^ (var_2)))));
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1038339459795229727LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39267))) : (-1038339459795229743LL))), (((/* implicit */long long int) (unsigned short)49671))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (min((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-20608)), (var_5))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((int) 32256U));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)20635)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65533)))), (((((/* implicit */int) (unsigned short)3)) * (((/* implicit */int) (unsigned short)65533))))))) ? ((-(((/* implicit */int) arr_7 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3])))) : ((((!(((/* implicit */_Bool) (unsigned char)27)))) ? (arr_6 [i_1] [i_1 + 1] [i_2 + 1]) : (((/* implicit */int) ((unsigned char) arr_4 [i_0] [14ULL] [14ULL])))))));
                        arr_9 [i_0] [i_0] [(short)16] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)15] [(signed char)15] [i_3 + 1]))))), (max((1073741824), (-1073741824)))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [12LL] [(unsigned short)14] [i_3 - 1])) << (((((/* implicit */int) (unsigned short)26269)) - (26255)))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_1] [i_2] [4] [7ULL] [i_2 - 2] [i_2 - 1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)217))))));
                            arr_15 [i_4] [i_1] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)127))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3 + 1] [i_0]))))) : (min((6770230393808925257LL), (((/* implicit */long long int) arr_4 [i_3 - 4] [i_3 - 4] [i_3 + 1]))))));
                            arr_16 [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) (unsigned char)32)), (max((-1038339459795229743LL), (((/* implicit */long long int) (unsigned char)218))))))));
                            var_21 -= ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-20587)) : (((/* implicit */int) (signed char)22)))), (((((/* implicit */_Bool) 2566905953U)) ? (((/* implicit */int) (unsigned short)39267)) : (((/* implicit */int) (unsigned short)23395))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((-8761388721219502573LL) + (((/* implicit */long long int) ((/* implicit */int) (short)20608)))))))) || (((/* implicit */_Bool) ((unsigned int) arr_4 [i_3 + 1] [i_1 - 2] [i_4 - 1]))))))));
                        }
                        for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)9883)))) : (arr_2 [i_1] [i_3 - 4]))))));
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-32))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((arr_19 [i_2 - 1]) ? (((/* implicit */int) arr_19 [i_2 + 1])) : (var_7))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 199217976597214804LL)) ? (((/* implicit */int) (unsigned short)26269)) : (((/* implicit */int) (unsigned short)1920))));
                            arr_23 [i_0] [i_1 - 2] [i_1] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) ((short) (short)7278));
                            arr_24 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1038339459795229742LL)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_13 [i_0]))));
                            var_27 = ((/* implicit */int) 1038339459795229742LL);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1038339459795229739LL) | (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_8] [i_9] [i_8])))))) ? (((/* implicit */unsigned long long int) 1959391658)) : (((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? (((11369910389713698238ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))))) : (((/* implicit */unsigned long long int) -1959391652))))));
                        var_29 = max((((short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_7]))) : (0LL)))), (((/* implicit */short) arr_28 [(unsigned short)7] [i_8] [(unsigned short)7])));
                        arr_33 [i_7] [(unsigned short)2] [i_7] [(unsigned short)2] = ((/* implicit */int) var_1);
                        var_30 = ((/* implicit */signed char) arr_30 [i_7]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            for (long long int i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    {
                        arr_42 [i_7] [i_7] [i_7] [i_13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_13] [i_7])) ? ((-(1959391660))) : (((/* implicit */int) max((arr_37 [i_7] [i_11] [i_12]), (((/* implicit */short) arr_39 [(signed char)12] [(signed char)12] [i_13])))))))), (max((var_2), (arr_29 [15] [i_11] [i_12] [i_12 + 1])))));
                        var_31 = ((/* implicit */unsigned char) -1038339459795229752LL);
                    }
                } 
            } 
        } 
    }
    for (int i_14 = 1; i_14 < 10; i_14 += 2) 
    {
        var_32 -= 1607349289184628266ULL;
        var_33 |= ((/* implicit */_Bool) arr_1 [i_14] [i_14]);
        var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_14] [(unsigned short)17])) && (((((/* implicit */_Bool) (signed char)60)) || (((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))) && (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_29 [i_14] [i_14 - 1] [i_14] [7LL]))))))));
    }
    for (long long int i_15 = 1; i_15 < 16; i_15 += 3) 
    {
        arr_47 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!((_Bool)1)))), (max(((signed char)96), (arr_11 [(unsigned short)5] [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15])))))) ? (-1038339459795229731LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            for (unsigned char i_17 = 4; i_17 < 14; i_17 += 2) 
            {
                {
                    var_35 -= ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)51580)))), (-1859331330)));
                    var_36 = ((/* implicit */short) ((unsigned char) ((((((/* implicit */_Bool) (unsigned short)26153)) || ((_Bool)1))) ? (arr_29 [i_15 + 1] [i_17 + 3] [i_16 + 1] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1859331330)))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) ((((unsigned int) arr_46 [i_15 + 1])) * (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_53 [(unsigned char)3]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (short)-8578))) / (arr_38 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1])))))));
        arr_54 [i_15] = ((/* implicit */unsigned char) ((long long int) ((2579947848U) / (((/* implicit */unsigned int) 1959391657)))));
    }
    var_38 -= ((/* implicit */unsigned short) ((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)31875)), (((unsigned int) (unsigned short)33660))))) : (min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_15)) ? (3934194967484473257LL) : (((/* implicit */long long int) -1959391660))))))));
}
