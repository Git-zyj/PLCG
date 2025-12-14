/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249390
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) 9223372036854775807LL);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-29585), ((short)29678)))) ? (((/* implicit */int) max((arr_1 [i_0]), ((unsigned char)0)))) : (((/* implicit */int) arr_1 [(_Bool)1]))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) max(((signed char)41), ((signed char)-1)))), (((((/* implicit */int) (short)-11277)) ^ (((/* implicit */int) (unsigned short)40629))))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29678))) : (arr_0 [i_0] [(signed char)14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (short)11277))))) : (max((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_0 [i_0] [8ULL])))))));
        var_22 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? ((+(((/* implicit */int) (short)15)))) : ((~(((/* implicit */int) (short)11277))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (short)-27885))) * ((((_Bool)1) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)-19438))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26831))))), (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8242))) : (11329619564392768637ULL)))))));
        var_24 = ((/* implicit */unsigned short) min(((short)-26831), ((short)-20991)));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) arr_5 [i_1]))), (max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)11277)) : (((/* implicit */int) (unsigned char)255)))), ((-(((/* implicit */int) (unsigned char)0))))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_1] [i_3] [i_1] [i_1])), (min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        arr_12 [i_1] [i_2] [(unsigned char)21] [i_4 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) % (18446744073709551593ULL))))) : (((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2])))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26347)))))))));
                    }
                } 
            } 
        }
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [(unsigned short)15] [i_1] [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_1]))))) ? (((/* implicit */int) ((short) arr_11 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */int) min((arr_11 [i_1] [i_1] [i_1] [16ULL]), (((/* implicit */short) arr_6 [i_1] [i_1] [i_1])))))))) ? (((/* implicit */int) max(((unsigned char)128), (arr_9 [i_1] [i_1])))) : (((/* implicit */int) (short)-32767))));
        arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11329619564392768637ULL)))))) / (((arr_5 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_9)), (arr_7 [i_1] [i_1] [12ULL] [i_1])))), ((+(4486591113886106258LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), (arr_2 [i_1]))))) >= (min((((/* implicit */long long int) (short)29678)), (-4486591113886106259LL)))))))));
    }
    var_27 = min(((short)11277), ((short)-12549));
}
