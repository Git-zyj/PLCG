/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196973
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
    var_15 = ((/* implicit */int) (unsigned short)56615);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 += ((/* implicit */unsigned int) min(((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_1))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_8 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)62203)) | (((/* implicit */int) (short)13872)))), (((/* implicit */int) ((signed char) 4456844688178574817ULL)))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6130115293835367467LL)) ? (((/* implicit */int) (short)-19103)) : (((/* implicit */int) var_13))))) ? (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4088))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)53)) / (((/* implicit */int) arr_0 [i_3])))))))));
                        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (min((((/* implicit */long long int) var_5)), (2397367068006784072LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2397367068006784084LL)) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))), ((-(((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_11 [i_4] [i_4] = ((/* implicit */_Bool) (+(-2147483625)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    arr_17 [i_4] [i_5] [i_6] |= 7929922596208828281LL;
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_15 [i_6] [i_5] [i_5] [i_4])), (2147483647)))) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1)))))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))))))));
                    var_21 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_0 [i_4])), (arr_9 [i_5]))), (min((((/* implicit */unsigned long long int) arr_0 [i_6])), (arr_9 [i_4])))));
                }
            } 
        } 
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(arr_13 [i_4] [i_4] [i_4])))) == (min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) : (var_12)))))));
        var_22 ^= ((/* implicit */int) (!((((((_Bool)1) && (((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_4] [i_4])), (var_1))))))));
        var_23 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_7])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_4))))));
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741312)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_7]))) : (-3844350504087092436LL)));
        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) / (arr_9 [i_7])));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    arr_27 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_8])) && (((/* implicit */_Bool) arr_1 [i_7]))));
                    var_27 = ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : (var_11));
                }
            } 
        } 
        var_28 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [(short)5] [i_7] [i_7]))));
    }
}
