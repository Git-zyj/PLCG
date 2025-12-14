/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40214
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
    var_12 ^= ((/* implicit */_Bool) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] &= arr_2 [5U];
        var_13 -= ((/* implicit */long long int) ((((/* implicit */int) (short)-19441)) != (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_14 = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19441))) : (4294967295U));
        arr_8 [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 &= ((short) (+(arr_12 [i_2] [i_2])));
                    var_16 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) != (((long long int) var_10))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_17 = ((((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) var_5))) : ((((~(((/* implicit */int) var_6)))) ^ ((~(((/* implicit */int) (_Bool)0)))))));
                        var_18 = ((/* implicit */unsigned int) (~((((+(((/* implicit */int) (unsigned short)35136)))) & ((~(((/* implicit */int) var_6))))))));
                        var_19 = ((/* implicit */unsigned short) var_4);
                        arr_20 [i_2] [i_2] [i_3] [i_4] [i_4] [(short)10] |= ((/* implicit */unsigned char) arr_12 [i_2] [i_3]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) -773501053);
                                var_21 = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (min((((/* implicit */long long int) arr_21 [i_3] [i_3 + 1] [i_7] [i_3])), (arr_10 [i_3 + 1] [i_3 - 1])))));
                                arr_26 [(unsigned char)1] [i_3] [(unsigned char)15] [i_7] = ((/* implicit */signed char) max(((~(((/* implicit */int) (short)3602)))), (((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_2]))));
                                var_22 = ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(var_8)))), (((((/* implicit */_Bool) arr_17 [(unsigned char)16] [i_4] [i_6 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3314847622U)))))) - (arr_14 [i_2] [i_2] [18U])));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned int) arr_18 [i_2]);
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2118760045)) ? (((/* implicit */int) (short)19458)) : (var_1)))), (arr_23 [(unsigned short)16])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))));
        var_25 = ((/* implicit */unsigned int) var_2);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-4)) / (var_8)))) ? (-1957854487) : (((/* implicit */int) var_9))))) ? (arr_12 [i_2] [i_2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2] [i_2])))))));
    }
    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_9 = 3; i_9 < 18; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_8), (((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1))))) ? ((~(((((/* implicit */unsigned int) var_10)) ^ (var_0))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)14149)))))));
                        arr_37 [i_8] [i_9] [i_8] = (((!(((/* implicit */_Bool) arr_18 [i_9 - 1])))) ? (((/* implicit */int) arr_34 [i_9] [i_9 + 2] [i_9] [i_8])) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_30 [i_10] [8U])) && (((/* implicit */_Bool) (short)14353))))))));
                        arr_38 [i_8] [i_9 + 1] [i_10] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (unsigned short)60203)) : (2147483647)))));
                        arr_39 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 381832619U)) ? (((/* implicit */int) (signed char)-39)) : (var_8)))) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)37)) % (var_8)))) ? (((/* implicit */int) (unsigned char)1)) : ((~(((/* implicit */int) (short)-1847)))))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((max((((/* implicit */int) arr_32 [i_8] [i_8] [i_11])), (var_8))) | (1738904603)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (signed char)-98)), (-590926521)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)19458)) / (((((/* implicit */_Bool) 2977776660U)) ? (((/* implicit */int) (unsigned short)14458)) : (((/* implicit */int) (short)-1842))))))) : (2977776660U)));
    }
}
