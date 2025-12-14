/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1928
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) 1971562822)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 7; i_3 += 2) 
                {
                    {
                        var_17 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_7 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9])) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (_Bool)1))))));
                        var_18 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_19 = ((((/* implicit */_Bool) var_2)) ? (((arr_12 [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (var_0)))) ^ ((~(arr_12 [i_4]))))));
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [4U])) : (((/* implicit */int) (unsigned short)8930))))) : (min((-8567513467775304027LL), (((/* implicit */long long int) (_Bool)1)))))) << (((max((((/* implicit */int) ((unsigned short) var_16))), ((~(var_1))))) - (356040861)))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [0U])) : (-320650414))))))))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60103)) ? (((min((var_15), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 - 2] [i_8 - 1] [i_7 - 2] [i_8] [i_8] [i_8]))) : (((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [(unsigned short)17] [7LL] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))) : (3471640009904479115ULL))))) : (min((((/* implicit */unsigned long long int) 1963005846U)), (9223372036854775808ULL)))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(signed char)2])) ? (var_14) : (((/* implicit */unsigned int) var_0))));
                            var_24 = ((/* implicit */short) ((signed char) min((-8567513467775304027LL), ((((_Bool)0) ? (-8567513467775304027LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_9 = 2; i_9 < 15; i_9 += 4) 
        {
            arr_28 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned long long int) (((_Bool)0) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4])))))), (((17179869183ULL) >> (((8567513467775304027LL) - (8567513467775303971LL))))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (short i_11 = 4; i_11 < 17; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) (_Bool)1);
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) min((var_6), (((/* implicit */unsigned long long int) 527094468U)))))) || (((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)29562)))))))));
                            arr_38 [i_4] [i_9 + 3] [i_4] [i_4] [i_4] [i_4] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_32 [i_4] [i_4] [i_11 - 2])) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-8567513467775304005LL))));
                            var_28 = ((/* implicit */unsigned int) ((unsigned short) (~(((((/* implicit */_Bool) (unsigned short)35994)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62615)))))));
                            arr_39 [i_4] [i_4] [i_4] [(_Bool)1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) max(((unsigned short)59947), (((/* implicit */unsigned short) (unsigned char)152))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            arr_42 [i_4] [i_4] = var_1;
            var_29 = ((/* implicit */unsigned char) ((unsigned short) 3039929318U));
        }
        for (short i_14 = 3; i_14 < 16; i_14 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35994))) == (((((/* implicit */_Bool) (-(3039929337U)))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7337))) : (-8567513467775304028LL))) : (((/* implicit */long long int) (((_Bool)1) ? (485873107) : (((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((485873103) < (((/* implicit */int) arr_40 [i_4] [i_14] [i_15])))))) : (((((/* implicit */_Bool) var_4)) ? (562949953421311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) ((((/* implicit */_Bool) -8567513467775304027LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)511)) ? (((((/* implicit */_Bool) 2330263924222671098LL)) ? (2500704315U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_4] [i_14 + 1])) <= (((/* implicit */int) (signed char)55))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) arr_35 [i_4] [i_4] [i_4])), (((/* implicit */unsigned char) (!(var_15)))))))) : (((((/* implicit */_Bool) arr_35 [i_14 + 1] [i_4] [i_4])) ? (((((/* implicit */_Bool) 866410319U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3428556976U))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13800))) : (0U)))))));
                        arr_50 [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 7752724811077514659LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) < (8778913153024ULL))))) : (((3552947783485883197ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned long long int) (-(((unsigned int) (short)3809)))))));
                        arr_51 [i_4] [i_4] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) : (4537782123672889896LL)));
                    }
                } 
            } 
        }
    }
    var_33 *= ((/* implicit */signed char) max((((((/* implicit */long long int) 2090858079U)) - (((4196480979538449752LL) - (4196480979538449752LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)15060))))), ((+(2053034617U))))))));
    var_34 = ((/* implicit */unsigned long long int) var_3);
}
