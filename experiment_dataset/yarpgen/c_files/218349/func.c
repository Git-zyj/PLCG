/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218349
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_7)), (var_17)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) ^ (((max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))) | (((/* implicit */unsigned int) ((arr_0 [i_0]) ^ (((/* implicit */int) arr_3 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_20 = ((/* implicit */long long int) ((max((((3221225472U) >> (((7364573515511242339LL) - (7364573515511242337LL))))), (((/* implicit */unsigned int) ((signed char) arr_0 [i_0]))))) / (((/* implicit */unsigned int) max((((int) arr_0 [i_0])), (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_1]);
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 + 3] [i_2 + 3])) ? (((/* implicit */long long int) ((arr_6 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [2] [i_2])))))) : (((-7364573515511242336LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_13 [i_2 + 3] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_1])) & (((/* implicit */int) arr_11 [i_1])))) | (((((/* implicit */int) arr_3 [i_1])) >> (((arr_6 [i_1]) - (616242388U)))))));
        }
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_7 [i_1])))));
    }
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_3]);
        arr_18 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2235644535109992313LL)) ? (max((((/* implicit */int) (unsigned char)251)), (arr_15 [i_3]))) : (((/* implicit */int) (signed char)-126))))) : (1073741824U)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
        {
            arr_21 [i_3] = ((/* implicit */int) ((-7364573515511242340LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_23 = ((arr_16 [i_3] [i_4]) | (arr_16 [i_3] [i_4]));
            arr_22 [i_4] [(_Bool)1] &= ((arr_16 [i_4] [i_4]) - (arr_20 [i_4]));
        }
        for (int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
        {
            arr_27 [i_3] = ((/* implicit */int) ((unsigned short) arr_19 [i_3]));
            arr_28 [(_Bool)1] [i_3] [i_5] = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */int) (signed char)-110)) + (2147483647))) >> (((((unsigned int) 1518623159U)) - (1518623150U))))));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_1 [i_6] [4LL])) + (arr_30 [i_6]))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2664521391U)))))))));
        var_25 = ((/* implicit */long long int) arr_26 [i_6] [i_6]);
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((arr_0 [16U]) - (((/* implicit */int) ((unsigned short) arr_1 [i_6] [i_6]))))))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6])) ? (arr_24 [i_6] [i_6] [i_6]) : (arr_24 [i_6] [i_6] [i_6]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 6706421373103832865ULL)) ? (((/* implicit */int) (unsigned short)34467)) : (1484044719))) ^ (((/* implicit */int) ((unsigned short) arr_24 [i_7] [i_7] [i_7])))))) ^ (((((/* implicit */_Bool) arr_33 [i_7])) ? (max((arr_25 [i_7] [(unsigned short)8] [8LL]), (arr_16 [(signed char)10] [(signed char)10]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_29 [16U])), (arr_1 [i_7] [i_7]))))))));
        var_29 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (signed char)120)), (((0LL) + (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_7]))))))), (((max((((/* implicit */long long int) arr_0 [i_7])), (arr_25 [(unsigned char)0] [(unsigned char)0] [(signed char)24]))) / (((/* implicit */long long int) arr_24 [i_7] [i_7] [i_7]))))));
        var_30 = ((/* implicit */unsigned int) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7]))) * (arr_20 [i_7]))), (((/* implicit */long long int) ((unsigned char) arr_26 [(_Bool)1] [(_Bool)1]))))) / (((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned char) arr_19 [(signed char)14])), (arr_32 [i_7] [i_7]))), (arr_33 [i_7])))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_36 [i_8] [i_8] = ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */int) arr_32 [i_8] [i_8])) : (((/* implicit */int) arr_2 [i_8])))))) - (max((arr_23 [i_8] [i_8]), (arr_16 [i_8] [i_8]))));
        arr_37 [i_8] = ((/* implicit */unsigned char) ((((arr_20 [i_8]) + (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_8])), (arr_31 [i_8])))))) - (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_3 [i_8]))), (((arr_1 [i_8] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8]))))))))));
        arr_38 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_26 [i_8] [i_8])) | (max((((/* implicit */unsigned long long int) 1627751122)), (15663104041480573820ULL)))))) ? (((arr_24 [i_8] [i_8] [(signed char)3]) | (((/* implicit */int) arr_19 [i_8])))) : (((/* implicit */int) arr_19 [i_8]))));
        var_31 = ((/* implicit */_Bool) max((((/* implicit */int) arr_32 [i_8] [i_8])), (((((/* implicit */int) arr_33 [i_8])) & (((/* implicit */int) ((signed char) 9205357638345293824LL)))))));
    }
}
