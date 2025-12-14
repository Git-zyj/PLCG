/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237740
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
    var_11 = var_4;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-41)), (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) && (((/* implicit */_Bool) (signed char)1)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_13 = ((((((/* implicit */_Bool) arr_4 [(unsigned char)3] [(unsigned char)3] [i_2])) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)3] [i_2]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_2 [i_1]))))));
            }
            arr_8 [(signed char)14] [(unsigned short)9] [(unsigned short)9] = min(((signed char)-3), ((signed char)-5));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        {
                            arr_16 [i_4] = ((/* implicit */unsigned char) var_5);
                            arr_17 [i_0] [(unsigned char)6] [i_0] [i_3] [i_0] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */int) arr_15 [i_5] [i_4] [(unsigned char)0] [i_4] [i_5 - 1] [(unsigned char)6] [i_5 + 1])) | (((/* implicit */int) arr_15 [i_5] [i_4] [i_5 - 2] [(unsigned char)1] [i_5 + 1] [i_5] [i_5 - 2]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((var_3) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)47475)) < (((/* implicit */int) arr_4 [i_0] [i_0] [4ULL])))))));
            arr_20 [i_6] [i_6] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (signed char)6))))) || (((/* implicit */_Bool) arr_11 [i_6 - 2] [0ULL] [(signed char)0] [i_6])));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    {
                        arr_28 [i_0] [i_6] [i_7] [(unsigned char)7] [i_0] [i_6 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)130)) - (((/* implicit */int) arr_7 [(signed char)8] [i_6 - 2] [12ULL] [i_6 - 2])))) == (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned char)28))))));
                        arr_29 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_13 [i_6] [i_0]))));
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) arr_9 [i_9] [i_0] [6ULL]);
            var_17 = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) (unsigned char)6))) ^ (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_10)))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_9])))))));
        }
        var_18 = ((/* implicit */unsigned char) (unsigned short)0);
        arr_33 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)199)) | (((/* implicit */int) (unsigned short)2)))) < (((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [(unsigned char)3] [(unsigned char)3])))));
    }
    var_19 = var_4;
}
