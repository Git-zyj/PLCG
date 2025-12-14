/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229658
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
    var_14 = ((/* implicit */_Bool) min(((unsigned short)12288), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) (unsigned char)148))))) || (((/* implicit */_Bool) var_2)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(unsigned char)1] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 15671057212923239017ULL)))) | (2775686860786312599ULL)))));
        var_15 |= ((/* implicit */_Bool) var_13);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((arr_9 [i_2]), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (11575310356142312320ULL))))));
                            var_16 = ((/* implicit */int) max((var_16), ((~(((/* implicit */int) ((_Bool) arr_1 [i_1])))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 0ULL))));
                            arr_13 [i_0] [(unsigned short)10] = arr_1 [i_0];
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (~(var_11))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) -23LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9488466406040217462ULL)));
                        }
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-39)), ((unsigned short)64892))))))) ? (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (arr_6 [4] [i_3] [(_Bool)1]) : (((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_3] [i_0])))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)0)));
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_20 [i_6] [i_6])))) % (((/* implicit */int) arr_20 [i_6] [i_6])))))));
        var_22 = ((/* implicit */int) var_13);
        var_23 = ((/* implicit */short) 1681980460);
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((+(-6570044020011382581LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (6840053216984041179ULL))))))))));
            var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 2305843009213693951ULL)) ? (arr_21 [(short)19]) : (((/* implicit */int) var_7)))))), (7825936936632999786ULL)));
            var_26 = ((arr_22 [21] [20LL]) | (((/* implicit */int) max(((signed char)39), ((signed char)0)))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            arr_28 [i_6] [i_8] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)3] [(unsigned short)3]))) : (18446744073709551605ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            arr_29 [i_6] [i_6] [i_6] = ((/* implicit */short) var_2);
            var_27 |= ((/* implicit */short) (+(((/* implicit */int) arr_25 [(_Bool)1] [i_8] [i_6]))));
        }
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */int) arr_34 [i_6] [i_6] [i_10] [i_9]);
                            var_29 += ((/* implicit */short) ((arr_22 [i_12] [i_6]) != (((/* implicit */int) arr_26 [i_6] [i_6]))));
                        }
                        var_30 = (short)32627;
                    }
                } 
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */_Bool) (+((~(arr_21 [i_13])))));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) min((((unsigned long long int) -2043419720)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((((/* implicit */int) (short)10744)) << (((((/* implicit */int) (unsigned short)12723)) - (12721)))))))))))));
        var_33 ^= ((/* implicit */signed char) var_9);
    }
    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_34 &= ((/* implicit */_Bool) (-(72057594037403648ULL)));
                    var_35 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_4)))))) <= (max((34359738367LL), (((/* implicit */long long int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_14]), (arr_18 [i_14]))))) : (((((/* implicit */_Bool) ((short) -13LL))) ? (((/* implicit */unsigned long long int) (~(13LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_14] [i_14] [(short)14] [2]))) - (var_1)))))));
                }
            } 
        } 
        arr_49 [i_14] = ((/* implicit */long long int) max((((unsigned char) (_Bool)0)), (((/* implicit */unsigned char) (signed char)-13))));
        var_36 = ((((/* implicit */_Bool) (+((-(arr_32 [i_14] [(signed char)11] [i_14])))))) ? ((((-(((/* implicit */int) var_0)))) + (((/* implicit */int) min((var_5), (arr_30 [i_14] [i_14])))))) : (min((((/* implicit */int) arr_38 [i_14] [(unsigned short)0] [i_14])), (((((/* implicit */_Bool) arr_21 [i_14])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-39)))))));
    }
}
