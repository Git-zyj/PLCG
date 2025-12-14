/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243165
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((var_9) + ((~(((/* implicit */int) var_0)))))))));
            var_20 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_0]))))), (max((((/* implicit */unsigned long long int) 46667684U)), (18446744073709551605ULL)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_15 [i_5] [i_4] [i_2] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_5]);
                            var_21 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_2]))))) > (min((2459954388646069683ULL), (((/* implicit */unsigned long long int) var_17))))))), ((+(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_3] [i_5])))))))));
                            var_22 = ((/* implicit */unsigned short) (((~(1048448))) != (min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) != (var_10)))), ((~(((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) min(((+(arr_8 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6375384112338251011ULL))))) : (((/* implicit */int) ((12071359961371300613ULL) >= (((/* implicit */unsigned long long int) -844806892))))))))));
            arr_16 [i_0] = ((/* implicit */long long int) ((unsigned int) ((unsigned char) max((((/* implicit */unsigned short) var_18)), (arr_1 [(unsigned short)4])))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_4 [i_2]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_18 [i_6] [i_6] [i_8])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [2])) ? (arr_23 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]) : (((((/* implicit */int) var_14)) << (((((/* implicit */int) (unsigned char)214)) - (211))))))))));
                            var_26 = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_10 = 4; i_10 < 10; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        arr_31 [i_0] [i_6] [i_6] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18076282728037580076ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)124)) ? (arr_10 [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_10] [i_11]))) : (((((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11])) ? (arr_10 [i_11] [i_10 - 2] [i_6]) : (arr_10 [i_0] [i_6] [i_11])))));
                        var_27 += ((signed char) (_Bool)1);
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            arr_35 [i_12] = ((/* implicit */unsigned short) ((unsigned char) var_6));
            var_28 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_0] [i_12])) ^ (((/* implicit */int) arr_6 [i_0] [i_0])))) ^ (((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [i_12]))))));
            arr_36 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        }
    }
    for (short i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        arr_40 [i_13] = ((((/* implicit */int) (short)-15026)) < (((/* implicit */int) (unsigned char)203)));
        var_29 = ((/* implicit */_Bool) max((var_29), ((_Bool)1)));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_43 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 3345444411404205567ULL))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2676881453U)))) : (18446744073709551601ULL)));
        arr_44 [i_14] = ((/* implicit */unsigned short) arr_4 [i_14]);
        arr_45 [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)225)))))) / ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49850))) : (16262927646319191144ULL)))));
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        var_30 -= ((/* implicit */unsigned short) ((long long int) (((!(((/* implicit */_Bool) -1048465)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)29075)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned char)240)))));
        var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_37 [i_15])))))), ((-(((unsigned long long int) arr_38 [i_15]))))));
        arr_48 [i_15] [i_15] = arr_38 [i_15];
        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)47886))));
    }
    /* LoopSeq 1 */
    for (int i_16 = 0; i_16 < 12; i_16 += 2) 
    {
        arr_51 [i_16] = ((/* implicit */unsigned short) arr_39 [i_16]);
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) arr_39 [i_16]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 1; i_17 < 22; i_17 += 4) 
    {
        for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            {
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) 3905126642U)), (966376832761158410ULL)))))));
                arr_58 [i_17] [(signed char)22] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6549211974130878940LL)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned short)47882))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_37 [i_17 - 1])))) : (-6453502736412139679LL)));
                arr_59 [i_18] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) 5066578449039625679ULL)) ? (2676881453U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
