/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25234
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
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned short) (-(((((/* implicit */int) max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 2])))) & (((/* implicit */int) ((_Bool) arr_3 [i_0])))))));
        var_15 &= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-99))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_16 = ((((/* implicit */_Bool) (-(17418778026462387805ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)169)) ^ (-107672745)))) : (3183768796162130399LL));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((long long int) arr_0 [i_2] [i_3])))));
                    var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_8)))));
                    var_19 = ((/* implicit */signed char) arr_8 [i_3] [i_1] [i_2]);
                    var_20 = ((/* implicit */unsigned long long int) ((signed char) arr_8 [i_1] [i_2] [i_3]));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) 926034139229140775ULL));
                }
            } 
        } 
        var_21 |= ((/* implicit */unsigned int) (-((~(arr_5 [(_Bool)1])))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (signed char)3))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_23 = ((18446744073709551609ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))));
        var_24 *= ((/* implicit */_Bool) ((unsigned short) arr_3 [i_4]));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_15 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_4] [8U])) ^ (((/* implicit */int) arr_0 [i_4] [i_5]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)13)))) : (((((/* implicit */_Bool) 15972899252325174530ULL)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (unsigned short)22))))));
            arr_16 [i_5] = ((/* implicit */signed char) max((1812760466U), (((/* implicit */unsigned int) (unsigned char)202))));
        }
        arr_17 [i_4] [i_4] &= ((/* implicit */unsigned char) min(((+(arr_4 [i_4] [i_4]))), (min((arr_4 [i_4] [i_4]), (arr_4 [i_4] [11LL])))));
    }
    var_25 += ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_2)) ? (var_8) : (15088688826526279187ULL))), (((/* implicit */unsigned long long int) ((int) (unsigned short)0))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17)))));
    var_26 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((/* implicit */int) (_Bool)0))))), (((unsigned int) var_6)))), (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 16; i_6 += 2) 
    {
        var_27 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-60)) || (((/* implicit */_Bool) ((unsigned short) arr_19 [4U])))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (arr_18 [i_6] [i_6 + 4])));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_10))) * (((/* implicit */int) arr_19 [i_6 - 2]))));
    }
    for (unsigned char i_7 = 2; i_7 < 23; i_7 += 3) 
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))))))))) < (arr_24 [i_7 + 1] [i_7 + 1])));
        var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (short)7451)), (arr_24 [(unsigned short)22] [i_7 - 1]))))) + (((/* implicit */int) max((arr_22 [i_7 - 2]), (arr_22 [i_7 - 1]))))));
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_4))) != ((+(((/* implicit */int) arr_22 [i_7]))))));
    }
}
