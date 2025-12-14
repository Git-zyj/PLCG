/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27099
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83)))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) 1789639388))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) -1789639390))));
    }
    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_16 = max((((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_3 [i_3 - 3]))))), (((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_3 + 3])) : (var_0))));
            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 3]))) : (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2414824723587490889LL)))))))) : (arr_6 [i_3] [i_4] [i_4])));
        }
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 2113579323))) ? (((((/* implicit */_Bool) 0U)) ? (-1365121173) : (((/* implicit */int) (_Bool)1)))) : (200795294))))));
            var_19 = ((/* implicit */long long int) -1);
            /* LoopNest 3 */
            for (unsigned int i_6 = 2; i_6 < 10; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_18 [i_6 + 1] [i_3 - 2] [i_5 + 1])) : (var_4)));
                            var_21 = ((/* implicit */int) ((arr_12 [i_5 - 2] [i_7 - 1]) / (((/* implicit */long long int) var_8))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 200795294)))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (arr_14 [i_6 + 1] [i_6 - 2])));
                        }
                    } 
                } 
            } 
        }
        for (int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_8), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_5)) : (arr_4 [i_3] [i_9])))) ? (min((var_3), (((/* implicit */int) var_10)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)173))))))));
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 255))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_13 = 4; i_13 < 12; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) arr_3 [i_13 - 2])), (134209536U))));
                            arr_49 [i_9] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)0))) <= (-877943516))))) < (((6522395833946030582LL) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_3] [i_9] [i_13 - 4] [i_14] [i_13 - 4] [i_9] [i_14]))))))))));
                        }
                    } 
                } 
            } 
            var_27 *= ((/* implicit */unsigned int) 2414824723587490886LL);
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((((/* implicit */unsigned int) (+(252)))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (arr_32 [i_3] [0U] [i_3]))), (arr_47 [i_3] [i_3] [i_3] [i_3 + 1] [i_3]))))))));
    }
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
    {
        var_29 -= ((/* implicit */unsigned char) var_10);
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_10)) + (114)))))) ? (((((/* implicit */_Bool) arr_52 [i_16] [i_16])) ? (-2414824723587490883LL) : (2414824723587490883LL))) : (((/* implicit */long long int) arr_50 [i_16] [i_16]))))) ? (((int) var_10)) : (((((/* implicit */_Bool) 200795287)) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    {
                        arr_63 [i_16] [i_17] [i_18] [i_19] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -6414543725870923769LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_16])))))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) min((((/* implicit */int) var_1)), (min((-177470904), (-255))))))));
                    }
                } 
            } 
        } 
    }
    var_32 -= ((/* implicit */int) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (8734088698974743330LL))))) : (var_2)));
}
