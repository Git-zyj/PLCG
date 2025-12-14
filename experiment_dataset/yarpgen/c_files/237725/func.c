/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237725
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_2 [i_0])))), ((!(((/* implicit */_Bool) var_10))))))))))));
        var_17 ^= ((/* implicit */unsigned short) (+(((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) ^ ((~(arr_4 [i_1]))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1]))))) != (((/* implicit */int) ((unsigned char) arr_8 [9]))))))) ^ (((((/* implicit */unsigned long long int) -371787850)) / (8787503087616ULL))))))));
            arr_10 [(_Bool)1] [(unsigned short)10] = ((/* implicit */unsigned char) ((int) ((int) (-(288230376118157312ULL)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(max((((/* implicit */int) ((_Bool) arr_7 [i_3] [i_1]))), (((((/* implicit */int) arr_12 [i_1])) | (((/* implicit */int) var_15)))))))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32005)))))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_22 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_4] [i_4] [i_5]))));
            var_23 = ((/* implicit */unsigned char) arr_6 [i_4]);
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((arr_4 [i_5]) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_4] [i_4]))))))))));
            arr_18 [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [(unsigned char)7] [i_4])))))))))));
            var_25 -= ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((short) arr_12 [i_4]))), (((((/* implicit */int) (short)-32005)) ^ (((/* implicit */int) (short)32005))))))));
        }
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)47332)) ^ (((/* implicit */int) arr_9 [i_4]))))) ^ (((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_6 [i_4]) : (arr_6 [i_4]))))))));
    }
    var_27 = ((/* implicit */int) var_1);
}
