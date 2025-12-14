/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214680
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
    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (min((((/* implicit */unsigned long long int) (+(-1)))), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_12)) + (7378)))))), (14522586791873143536ULL)))));
    var_14 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3924157281836408080ULL)) ? (23) : (-26))), (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (max((((/* implicit */unsigned int) 26)), (3415587000U)))));
        var_16 = (((_Bool)1) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)3] [(_Bool)1]))))), (4595395555611461019ULL))) : (((/* implicit */unsigned long long int) -3332303261728303187LL)));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) var_12)), ((~(((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
            var_18 = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (max((((/* implicit */long long int) ((unsigned int) (unsigned short)15866))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_8 [i_0]) : (2816653836382760658LL))))))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3924157281836408083ULL)) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_2])) : ((-(-23)))))) ? (3924157281836408089ULL) : (((max((((/* implicit */unsigned long long int) var_7)), (14522586791873143545ULL))) ^ (min((((/* implicit */unsigned long long int) -1)), (3924157281836408049ULL)))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_12 [(unsigned char)12] [i_3] [i_3] = (unsigned short)61237;
            var_21 = ((/* implicit */unsigned int) ((long long int) ((4027674922364698259ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        arr_18 [i_0] [i_0 + 1] [i_0] [i_0] [i_3] [i_0] = ((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0]))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3]))) ^ (arr_8 [i_0]))) + (6356715956993840641LL))));
                        arr_19 [7ULL] [i_3] [i_3] [(_Bool)1] = ((/* implicit */long long int) arr_7 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13]);
                        var_22 = ((/* implicit */unsigned short) 7943412999187329683LL);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_0] [(unsigned short)4] [(short)14] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_14 [i_0] [(unsigned short)2] [i_0] [i_0]))));
                            var_24 = ((/* implicit */long long int) 1122601079U);
                            var_25 = arr_13 [i_0] [i_0] [i_3];
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (((+(((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 1] [i_0])))) < (((/* implicit */int) arr_20 [i_0] [i_0] [(_Bool)1] [i_0 + 1] [i_0] [i_0])))))));
                        }
                    }
                } 
            } 
        }
        var_27 &= ((/* implicit */unsigned int) min((9129632979733913000LL), (((/* implicit */long long int) ((max((arr_14 [i_0] [10ULL] [2ULL] [i_0]), (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0 + 3])))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 14522586791873143555ULL)))))))));
    }
    for (long long int i_7 = 3; i_7 < 13; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_28 ^= ((/* implicit */unsigned char) (unsigned short)54231);
            var_29 = ((/* implicit */unsigned int) (unsigned short)65535);
        }
        var_30 = ((/* implicit */int) ((unsigned long long int) max((min((17550626216739506496ULL), (((/* implicit */unsigned long long int) -7943412999187329681LL)))), (max((3924157281836408097ULL), (((/* implicit */unsigned long long int) var_3)))))));
    }
}
