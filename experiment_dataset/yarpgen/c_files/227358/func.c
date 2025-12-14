/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227358
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_6))));
    var_17 = ((/* implicit */unsigned int) ((int) ((((((/* implicit */int) var_7)) | (var_5))) | ((~(((/* implicit */int) (signed char)104)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) / (6876562244046141506LL))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned short)32768))))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_1))) % (var_5))))));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */int) (short)-30019)) : (((((/* implicit */_Bool) -8862533881043539219LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)32768))))));
                    var_20 = ((/* implicit */unsigned int) (((-(((4095ULL) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [3U])))))) >> (((min((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (450751003U))), (((/* implicit */unsigned int) ((int) var_13))))) - (450750999U)))));
                    var_21 = ((int) ((((/* implicit */_Bool) ((signed char) (signed char)15))) ? (((/* implicit */int) (short)30017)) : ((+(((/* implicit */int) (_Bool)1))))));
                    var_22 -= ((((/* implicit */_Bool) ((int) 11889866656969066062ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_2 - 1])) && (((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1])))))) : ((-(max((((/* implicit */unsigned int) (signed char)-56)), (arr_1 [i_2]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(6876562244046141511LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32776))) : (1568948513U))))) << (max((((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_3 [5] [i_0])))))))));
        var_24 *= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [(signed char)2] [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])) : (1217384782513130118ULL))));
    }
    for (int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_4 = 4; i_4 < 11; i_4 += 2) 
        {
            var_25 *= ((/* implicit */unsigned int) (+(((arr_5 [8]) ? (((/* implicit */int) (short)-31997)) : (((/* implicit */int) var_3))))));
            var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_4] [i_3 + 3])) : (((/* implicit */int) arr_10 [i_4] [i_3 + 3]))));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) (+(((unsigned int) 1568165176))));
            var_28 = ((/* implicit */int) 9345194093378748345ULL);
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        {
                            arr_26 [i_3] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -299971615))) ? (((/* implicit */int) arr_5 [i_6])) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_9)) - (85)))))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((((/* implicit */_Bool) ((var_4) ? (-8862533881043539219LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_6])))))) && (((/* implicit */_Bool) (short)31996))))));
                            var_30 = ((/* implicit */unsigned long long int) var_11);
                            var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_8] [i_8])) && (((/* implicit */_Bool) arr_13 [i_3 + 2] [i_8] [i_9]))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1204724370) >> (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-30019)) == (((/* implicit */int) var_2))))) : (((/* implicit */int) arr_25 [i_6] [i_6] [i_6] [i_3] [i_3 + 2] [i_3 + 1] [i_3 + 2]))));
            var_33 = ((/* implicit */_Bool) ((long long int) arr_10 [i_3] [i_6]));
        }
        var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(758031022)))) ? (((unsigned long long int) -6876562244046141506LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_35 = ((/* implicit */signed char) (((+((-(1287339117U))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((((/* implicit */_Bool) -2449650856731348330LL)) ? (-2147483618) : (1372246271))) : ((+(((/* implicit */int) var_8)))))))));
        var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (4104ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)30018)))))) : (((((/* implicit */_Bool) arr_8 [i_10])) ? (arr_28 [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */int) var_7)) & (2147483617))))))));
        var_37 *= (!((!(((/* implicit */_Bool) ((short) arr_7 [(unsigned short)9] [(unsigned short)9] [i_10]))))));
        var_38 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)112))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 16617912870272611450ULL)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (((((/* implicit */_Bool) -6876562244046141513LL)) ? (var_6) : (((/* implicit */unsigned int) -1087972209)))))))));
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 154244958)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)108))))), (var_11))))));
}
