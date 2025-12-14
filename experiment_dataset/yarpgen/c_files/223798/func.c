/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223798
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */long long int) -1696664267)) > (var_12))))))) < (max((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_0] [i_0])))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_1] [i_0])))))));
                        arr_11 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_3 [i_0] [i_1])))))));
                        var_20 &= ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) -795670510))))))));
                        arr_12 [i_2] [i_0] [9] [i_3] [i_1] = ((/* implicit */long long int) max(((unsigned char)255), ((unsigned char)253)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) ((signed char) 4501400604114944ULL))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) <= (arr_1 [i_0]))))))) ? (max((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) arr_10 [16ULL] [i_4] [i_1 + 1] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_14 [i_1] [i_4] [i_1])))) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)3)) : (-795670501))) << (((((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1]))) : (arr_0 [i_4 - 3]))) - (135U)))))));
                        arr_19 [i_0] [(short)3] [i_1] [i_1] = ((/* implicit */_Bool) (~(((int) max((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_1])), (arr_3 [i_1] [i_5]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_0] [(short)16] [i_0] [i_0] [i_0] [i_0])))))));
                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)65385)) ? (268435455) : (((/* implicit */int) (unsigned char)253)))) : (((/* implicit */int) (unsigned char)253))))));
                arr_25 [i_6] = ((((/* implicit */_Bool) -1073741824)) ? (arr_16 [i_0] [i_6] [i_7] [i_0] [i_7] [i_0]) : (-795670501));
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 18; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) 795670511);
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
                        var_25 = ((/* implicit */long long int) (~(min(((~(-1))), (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_9] [i_8] [i_6] [i_6] [i_0] [10])) && (((/* implicit */_Bool) var_5)))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) 795670509))) ? (((/* implicit */unsigned long long int) ((int) arr_13 [i_6]))) : (((((/* implicit */_Bool) -1937852345)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))))))));
        }
        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            arr_33 [i_10] [i_10] = ((/* implicit */long long int) max((((short) (~(((/* implicit */int) (unsigned char)3))))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [16LL] [i_10])) && (((/* implicit */_Bool) arr_22 [i_10])))))) > (((((/* implicit */_Bool) arr_4 [0LL] [i_10] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60091))) : (arr_3 [i_0] [i_10]))))))));
            arr_34 [i_0] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)12288), ((unsigned short)0))))) % ((~(4294967279U)))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_5 [i_0] [i_0] [i_0]))) ? ((~(((((/* implicit */_Bool) (signed char)94)) ? (arr_29 [i_11] [i_11] [i_0] [i_11] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_11] [i_0]))) > (arr_29 [i_11] [i_11] [i_0] [i_11] [i_0]))))))))));
            arr_37 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((arr_15 [i_11] [17LL] [i_0] [i_0]) % (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_28 [i_0] [i_0])) : (((/* implicit */int) (signed char)-1))))), (arr_0 [i_0])))));
        }
        arr_38 [(signed char)13] = ((/* implicit */short) (~(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            var_28 -= ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) min((arr_14 [i_12] [i_12] [i_12]), (((/* implicit */unsigned char) var_9))))))));
            var_29 &= ((/* implicit */unsigned int) ((short) ((int) arr_15 [i_12] [i_12] [i_0] [i_0])));
        }
    }
    for (int i_13 = 0; i_13 < 23; i_13 += 1) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_42 [i_13]), (arr_42 [i_13])))) ? (((/* implicit */int) max((arr_42 [i_13]), (arr_42 [i_13])))) : (((/* implicit */int) ((((/* implicit */int) (short)22981)) >= (((/* implicit */int) (_Bool)0)))))));
        arr_45 [i_13] [i_13] = ((/* implicit */unsigned char) (~((~(((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((max((((var_7) + (var_12))), (((/* implicit */long long int) max((var_10), (var_10)))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_15)), ((short)22981)))) || (((/* implicit */_Bool) ((-8386457709094696839LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))))))));
}
