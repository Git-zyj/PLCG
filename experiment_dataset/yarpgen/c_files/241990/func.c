/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241990
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_3))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_13 -= ((/* implicit */_Bool) var_1);
                        arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */int) (unsigned short)55333)), (arr_5 [i_0] [i_0] [i_2] [i_3]))) % (((((/* implicit */_Bool) (short)25143)) ? (arr_5 [i_0] [i_1] [i_0] [15ULL]) : (((/* implicit */int) var_8))))));
                        arr_11 [i_0] = ((/* implicit */_Bool) (+(arr_4 [i_0] [i_1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_0] = (-(max((arr_5 [i_0] [i_1] [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_2] [i_0]))));
                            arr_15 [i_0] [(short)13] [i_2] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8))) : (arr_4 [i_0] [(_Bool)1])))));
                            var_14 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1])) / (arr_2 [i_0] [i_1] [i_4]))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_3]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)10203))))) : (((((/* implicit */_Bool) ((unsigned int) 14ULL))) ? (((/* implicit */unsigned long long int) arr_9 [14] [14] [i_3] [i_3])) : (12ULL)))));
                        }
                    }
                } 
            } 
        } 
        var_16 ^= ((/* implicit */unsigned short) (-((~(((((/* implicit */int) (unsigned short)10217)) | (((/* implicit */int) (unsigned short)55329))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        arr_19 [i_5 - 1] [i_5] = ((/* implicit */short) (unsigned short)10211);
        arr_20 [i_5] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_9))))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */signed char) 10304761097251519177ULL);
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [(unsigned short)12] [i_7 + 1])))) ? (6ULL) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) 1027857461U)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_7])) ? (var_1) : (((/* implicit */unsigned int) arr_2 [i_6] [i_6] [i_6 + 1]))))), (((unsigned long long int) arr_17 [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max(((unsigned short)10217), ((unsigned short)10221))))))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_18 = ((((((((/* implicit */_Bool) 1027857481U)) ? (67104768) : (-67104754))) == ((+(((/* implicit */int) arr_16 [i_7])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 18446744073709551575ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [5]))))), (((/* implicit */long long int) (short)-25147))))) : ((+(((var_0) ? (((/* implicit */unsigned long long int) 534248599U)) : (10ULL))))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [18LL] [i_7 - 1]), (((/* implicit */long long int) arr_16 [i_8 - 1]))))) ? (((/* implicit */long long int) 1624075328)) : (max((((/* implicit */long long int) ((int) -67104731))), (var_7))))))));
                arr_29 [15ULL] [15ULL] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_9)))) ? (arr_21 [i_7 + 1]) : (((((/* implicit */_Bool) arr_21 [i_7 - 1])) ? (arr_21 [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 + 1])))))));
                arr_30 [i_6] [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned long long int) min((((var_7) & (((/* implicit */long long int) ((unsigned int) var_4))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)29948)))))));
            }
            var_20 += ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)193)) ? (4981173795497692200ULL) : (5671260005010808942ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_7)))) ? (13926931956521160186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) (+(-19))))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-25150)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (4519812117188391429ULL))) : (((/* implicit */unsigned long long int) arr_9 [i_6] [i_6 + 1] [i_6 + 1] [i_7]))));
        }
        arr_31 [(unsigned short)10] = ((/* implicit */short) (+(min((35ULL), (((unsigned long long int) (-9223372036854775807LL - 1LL)))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 1704141396130879933ULL))));
                        var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 11577170103493404304ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_21 [i_11]))), (((/* implicit */unsigned long long int) 72057594037927935LL))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25147))) : (arr_22 [i_9])))) ? (((((/* implicit */_Bool) -72057594037927918LL)) ? (var_3) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 72057594037927935LL)))))))) : (((((/* implicit */_Bool) 72057594037927924LL)) ? (((/* implicit */long long int) -11)) : (9223372036854775806LL)))));
                        arr_43 [i_10] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_36 [i_12] [i_9] [i_9]), (((/* implicit */long long int) (_Bool)1))))) ? (4731468170413080967ULL) : (((/* implicit */unsigned long long int) ((arr_28 [(unsigned short)6] [(unsigned short)6] [i_11] [i_11]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (209481776) : (99458163))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) var_6);
    }
    var_25 &= ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (min((-67104766), (((/* implicit */int) (unsigned short)2757))))))));
}
