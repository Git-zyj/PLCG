/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31807
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
    var_11 += ((/* implicit */short) max((min((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))), (((/* implicit */long long int) (signed char)102))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_0] |= ((/* implicit */long long int) ((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8472)))));
            var_12 ^= ((unsigned char) var_7);
            var_13 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8472)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (unsigned short)42063))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 3]))) : (((unsigned int) (short)-8471)));
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_14 |= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((min((((/* implicit */unsigned long long int) (unsigned char)231)), (var_0))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)4] [i_2]))))))))), ((short)8469)));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [i_2] [i_0]);
        }
        for (short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [10U])) ? (((((/* implicit */_Bool) (short)8464)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_9 [(signed char)1])))) : (((arr_5 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) (short)-8482))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)8466)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_10))))))) : (arr_0 [i_0] [i_0])))));
            var_16 = ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) var_1))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])))))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */int) (short)8472)) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (var_7))))));
            var_18 = ((/* implicit */long long int) (unsigned char)25);
        }
        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((unsigned long long int) 2030900399U))))));
            var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) arr_10 [i_4] [i_0] [i_0]))), (var_9)))) ? (var_6) : (((/* implicit */long long int) ((arr_1 [i_0 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_0] [i_0 - 2])) : (((/* implicit */int) (unsigned char)221)))))));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)53)))) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (((arr_5 [i_0 - 3] [i_0 - 3]) ? (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (-1073741824LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)8466)))))));
        var_21 = ((/* implicit */unsigned int) min((((var_1) ? (((/* implicit */int) ((unsigned short) arr_8 [(signed char)9] [(signed char)9]))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)14766)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (short)8460)) : (((/* implicit */int) (unsigned char)242)))), (((/* implicit */int) arr_16 [i_5 - 1]))));
        var_23 *= ((/* implicit */short) arr_16 [(short)16]);
    }
    var_24 += ((/* implicit */unsigned short) (unsigned char)221);
    /* LoopSeq 3 */
    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) 
    {
        arr_22 [i_6 + 1] [(_Bool)1] |= ((/* implicit */unsigned short) max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)118))))) ? (max((404738323U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
        var_25 = ((/* implicit */unsigned int) (unsigned short)46593);
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_6 + 1])) : (((/* implicit */int) arr_17 [i_6 + 3])))), (((((/* implicit */int) (unsigned short)58513)) | (((/* implicit */int) arr_21 [i_7 + 1]))))));
            var_27 &= ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)25))))));
        }
        var_28 |= ((/* implicit */unsigned short) max((var_6), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) : (var_6))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned short) (-(max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) (unsigned char)25)))))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((arr_20 [i_8] [i_8]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((9187343239835811840LL), (((/* implicit */long long int) (unsigned short)41468)))))))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -7LL))))) ? (((/* implicit */unsigned long long int) (+(arr_31 [i_9] [i_9])))) : (((max(((_Bool)0), (arr_17 [i_9]))) ? (((/* implicit */unsigned long long int) (-(910815429U)))) : (max((36028796985409536ULL), (((/* implicit */unsigned long long int) var_2))))))));
        var_32 += var_10;
        var_33 -= ((/* implicit */unsigned int) ((unsigned char) (short)8472));
    }
}
