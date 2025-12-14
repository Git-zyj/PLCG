/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248745
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */signed char) 16ULL);
                    var_19 *= ((/* implicit */short) ((unsigned short) (short)-21526));
                    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) ((long long int) arr_1 [i_2] [i_2]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [(signed char)11])) ? (10ULL) : (((/* implicit */unsigned long long int) 2811110364U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [(unsigned char)13] [1ULL] [i_2]))))))) : (((((/* implicit */_Bool) arr_4 [i_2] [i_0 + 3] [i_0 + 4])) ? (arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 4])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((short) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_0 - 1]))))))));
        var_22 -= ((int) min((((long long int) arr_2 [i_0 + 1] [i_0] [i_0 + 1])), (((/* implicit */long long int) (unsigned char)70))));
        arr_7 [3LL] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_5 [i_0 - 1] [i_0] [i_0]) << (((arr_3 [9U] [i_0 + 3]) - (1391761053))))))))), (((((/* implicit */_Bool) (((_Bool)0) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (3601951440735993573LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)89)))))) : (((((/* implicit */_Bool) (short)-1)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3]))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_9 [9])))) : (((/* implicit */int) arr_10 [i_3] [(signed char)11]))))) ? ((+(((unsigned long long int) arr_11 [i_3])))) : (((/* implicit */unsigned long long int) ((long long int) (short)5262)))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    var_25 = ((/* implicit */unsigned char) arr_11 [i_3]);
                    arr_17 [(short)13] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-11)) : ((+(((/* implicit */int) (signed char)-74))))))) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) arr_18 [(short)0]))) >> (((((/* implicit */_Bool) arr_12 [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_6])))))) << (((((/* implicit */int) (unsigned char)98)) - (77)))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            for (int i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                for (signed char i_9 = 1; i_9 < 16; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max(((signed char)-95), (arr_11 [i_6]))))) ? (((unsigned long long int) ((arr_19 [i_6]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_27 [i_6] [i_7] [i_8] [i_9 + 2])))) << ((((~(16ULL))) - (18446744073709551586ULL))))))));
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)62)) && (((/* implicit */_Bool) (unsigned char)189))))) <= (((/* implicit */int) max(((short)27984), ((short)19569)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_27 [i_9 + 2] [10U] [10U] [i_6]))) : (((((/* implicit */_Bool) max((arr_12 [(signed char)0] [i_9]), (((/* implicit */int) (short)3395))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)110)), (18446744073709551612ULL))) : (max((((/* implicit */unsigned long long int) arr_18 [i_6])), (18446744073709551613ULL)))))));
                        var_28 = ((/* implicit */unsigned char) (((_Bool)0) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_7] [i_7] [i_7]))))), (arr_23 [i_6] [i_7] [i_9]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_7] [i_8 + 1] [i_7])))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) var_10);
    var_30 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)8)), (var_12)))) ? (((/* implicit */int) max(((short)32767), (((/* implicit */short) var_12))))) : ((-(((/* implicit */int) (unsigned char)62)))))), (((/* implicit */int) (short)3395))));
    var_31 = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162))))))));
}
