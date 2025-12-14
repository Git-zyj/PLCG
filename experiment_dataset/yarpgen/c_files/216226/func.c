/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216226
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((4397509640192LL) - (((/* implicit */long long int) 1523926883U))));
        var_16 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)98))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            var_18 = ((/* implicit */signed char) arr_6 [i_2 + 1]);
            var_19 = ((((/* implicit */_Bool) ((-1815102669) + (343797075)))) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1815102669)) != (3785624959715441590ULL))))));
        }
        for (long long int i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(unsigned char)21] [i_3] [i_3 - 4])) && (((/* implicit */_Bool) 9157178056644206019ULL)))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1815102669)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_11 [i_1]))));
            var_22 = ((/* implicit */int) (((+(2771040412U))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-121)) <= (((/* implicit */int) arr_8 [i_3] [i_3] [i_1])))))));
            arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (12104345199267702176ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 4] [i_3 - 2])))));
        }
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
        {
            arr_15 [i_1] [i_4 - 1] = ((/* implicit */unsigned long long int) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_4])))));
            arr_16 [i_1] [(short)10] [i_4] = ((/* implicit */unsigned long long int) (short)15085);
            arr_17 [i_1] [i_1] [i_4 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_4 - 1]))));
            arr_18 [i_4] [i_4 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15681098724320933014ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))) : (((arr_7 [i_4] [(unsigned char)17]) >> (((arr_6 [i_1]) - (14324174393317540821ULL)))))));
        }
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) 4059247375645032592ULL);
            var_24 = 740487647;
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_5])) ? (((((/* implicit */_Bool) -1815102669)) ? (166725116U) : (((/* implicit */unsigned int) -1053050240)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_5 + 1])))));
            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)127))));
        }
        arr_22 [i_1] [i_1] = ((/* implicit */signed char) (((~(18446744073709551615ULL))) >> ((-(((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-25005)) | (var_12))))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 1) 
    {
        var_28 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_23 [i_6 - 2] [i_6 + 1]))) - (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-24980)) <= (((/* implicit */int) arr_24 [i_6 - 2]))))), (arr_23 [i_6] [i_6]))))));
        var_30 = ((/* implicit */unsigned int) min((((min((((/* implicit */long long int) arr_24 [i_6])), (1262883377665752006LL))) / (arr_23 [i_6] [i_6]))), (arr_23 [i_6] [i_6 - 2])));
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [18U]))) / (min((((/* implicit */unsigned int) (short)24523)), (var_2))))))))));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_27 [i_7])))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (unsigned short i_10 = 3; i_10 < 14; i_10 += 1) 
            {
                {
                    arr_35 [(signed char)2] [i_9] [(signed char)2] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_8]))))) == (min((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [(_Bool)1] [(_Bool)1] [i_10])))))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) -1338823530)) ? (879538566354326004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39627)))));
                }
            } 
        } 
    } 
    var_34 = ((((((4385704988085317900ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned long long int) (+((-(2789173679U)))))));
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)102)) != (((/* implicit */int) (unsigned char)0))));
}
