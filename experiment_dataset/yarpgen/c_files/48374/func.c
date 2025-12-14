/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48374
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [12])) : (((/* implicit */int) arr_0 [(short)8])))));
        var_15 = ((/* implicit */short) min((12375886441398823690ULL), (1847065034769207109ULL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_6 [i_0] [10ULL] [17ULL] = 16599679038940344506ULL;
                /* LoopSeq 1 */
                for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [6ULL] [i_1] [i_2] [i_3] [i_3]))) > (3400087326021526723ULL)));
                    var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) -434548989)) ? (arr_5 [4LL] [14ULL] [i_3 + 1]) : (arr_5 [i_3] [20U] [i_3 + 3]))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1] [i_2] [i_3 + 1]) * (arr_4 [i_1 - 1] [i_1] [i_3 + 3]))))));
                }
                arr_12 [i_2] [i_0] [1] = ((/* implicit */int) 4250166887655984010ULL);
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    arr_15 [i_0] [i_0] [i_1] [i_2] [2U] [i_4] = ((/* implicit */int) arr_0 [i_0]);
                    arr_16 [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */int) arr_4 [i_1] [i_2] [i_4]);
                }
                for (unsigned int i_5 = 3; i_5 < 23; i_5 += 3) 
                {
                    var_19 += (~(((/* implicit */int) arr_3 [i_2] [10ULL])));
                    arr_19 [i_0] [9LL] = ((/* implicit */unsigned long long int) ((short) (-(var_2))));
                    arr_20 [8LL] [21U] [i_0] = ((/* implicit */long long int) var_1);
                    arr_21 [i_0] [6U] [i_1] [i_0] [i_5] = ((/* implicit */short) var_0);
                    arr_22 [i_0] [14U] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 15009793388244943432ULL)) ? (3400087326021526723ULL) : (((/* implicit */unsigned long long int) -969206637))));
                }
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 15046656747688024893ULL))));
            }
            var_21 = ((/* implicit */unsigned int) var_11);
            arr_23 [i_0 - 1] [23LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [0U] [i_1] [i_1 - 1] [18ULL])) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [7ULL] [i_0] [i_0]))))));
        }
        for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            var_22 = ((/* implicit */int) arr_14 [(short)0] [i_0] [i_0] [7U] [i_6] [i_6]);
            var_23 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [19LL]);
            var_24 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17120))) % (var_9))));
            var_25 ^= ((/* implicit */long long int) max((((arr_27 [i_0] [i_0 + 1] [i_0 - 1]) + (14196577186053567606ULL))), (((((/* implicit */_Bool) arr_27 [i_0] [i_0 - 1] [i_0 - 1])) ? (arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_27 [i_0] [i_0 + 1] [i_0 + 1])))));
        }
        for (long long int i_7 = 2; i_7 < 22; i_7 += 3) 
        {
            arr_31 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_7 + 1] [i_7])) ? (((/* implicit */unsigned int) var_3)) : (arr_29 [5U] [6]))) + (((/* implicit */unsigned int) ((int) arr_2 [i_7 - 1] [i_7] [i_7])))));
            arr_32 [i_0] [i_0] = ((/* implicit */int) ((((((unsigned int) 3098109200U)) % (((/* implicit */unsigned int) arr_18 [i_7])))) & (((/* implicit */unsigned int) min((min((arr_18 [7LL]), (1394770521))), (min((arr_18 [i_7]), (((/* implicit */int) (short)-14526)))))))));
            arr_33 [i_7] [i_0] = ((/* implicit */long long int) max((((6832585035856342600ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)9659)) : (arr_18 [9ULL])))))), (((/* implicit */unsigned long long int) arr_4 [i_7] [5] [i_0]))));
            var_26 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_0] [i_7])) ? (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) 1394770527))))) : (arr_18 [i_0]))));
        }
        var_27 += ((/* implicit */int) ((((/* implicit */int) ((arr_26 [i_0 + 1] [i_0 - 1] [i_0 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(short)10] [10ULL] [0ULL] [(short)0]))))))))) >= (var_4)));
        arr_34 [i_0] = ((/* implicit */short) min(((-(min((((/* implicit */unsigned long long int) var_10)), (arr_5 [i_0] [i_0] [1]))))), (((/* implicit */unsigned long long int) ((3140922213U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)14525))))))));
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2887))) >= (4538503999249044027ULL))))) * (var_13)));
    var_29 = var_10;
    var_30 = min((((/* implicit */long long int) var_1)), (var_11));
}
