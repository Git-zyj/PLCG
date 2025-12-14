/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48236
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2120258546623564581LL)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [8ULL]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [5] [i_0]))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_0]), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_0]))) : (18015882267453685478ULL))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((_Bool) ((_Bool) (((_Bool)1) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_14);
                            var_21 = ((/* implicit */long long int) (signed char)-44);
                            arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) max(((-(var_2))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (min((arr_1 [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_4] [i_3 - 1] [i_4 + 1] [i_3 + 1])))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_22 -= ((/* implicit */long long int) max((((/* implicit */signed char) var_5)), (max((((/* implicit */signed char) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_13))))), (arr_21 [i_0] [i_5])))));
                        arr_25 [i_7] |= ((/* implicit */unsigned short) (_Bool)1);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min(((unsigned char)135), (((/* implicit */unsigned char) ((signed char) arr_13 [i_0]))))))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_6))));
                        arr_26 [i_0] [i_5] [i_6 + 1] [i_7] [i_6 - 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)6)), (0ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)44)))), (((/* implicit */int) (short)12868))));
                    }
                } 
            } 
        } 
        var_25 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_13 [(_Bool)1])) : (((((((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [i_0])) >= (((/* implicit */int) arr_18 [i_0] [i_0] [(short)5] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 317062695555354057ULL)))))) : (((unsigned long long int) arr_2 [i_0])))));
    }
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */signed char) min((max((max((var_2), (((/* implicit */unsigned int) arr_8 [i_8] [i_8] [i_8] [(unsigned char)8] [i_8] [i_8])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_8]))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_8])))))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_8])), ((short)5952)))) ? (((((/* implicit */int) arr_10 [0ULL] [i_8] [i_8] [i_8])) << (((arr_6 [(_Bool)1]) + (5085173602009378625LL))))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_8] [i_8])) != (((((/* implicit */_Bool) 317062695555354057ULL)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_10)))))))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_8]) ? (((/* implicit */int) (short)12866)) : (((/* implicit */int) arr_3 [i_8]))))) ? (((/* implicit */int) arr_10 [10U] [i_8] [i_8] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_27 [i_8])), ((unsigned short)25633)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) 
        {
            var_28 = ((/* implicit */signed char) (+((~(10827578844887166100ULL)))));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) arr_5 [i_8] [i_8] [i_8]))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-104)), ((unsigned char)109)))))))) || (((/* implicit */_Bool) min((arr_32 [i_9 - 2] [i_8]), (arr_32 [i_9 + 3] [i_8])))))))));
            var_30 = ((/* implicit */long long int) 18129681378154197558ULL);
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-105))))) ? (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (unsigned char)39)))) : (((/* implicit */int) (short)5946))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((+(((/* implicit */int) arr_18 [(_Bool)1] [i_8] [i_9] [(unsigned char)2]))))));
        }
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)179)))), (((((/* implicit */int) var_6)) & (((/* implicit */int) var_4))))))) % (max((((/* implicit */long long int) var_1)), ((~(-4109164940694078205LL)))))));
    }
    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 1) 
    {
        var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)27))));
        arr_38 [i_10] = ((/* implicit */unsigned int) arr_34 [i_10]);
        var_34 ^= ((/* implicit */unsigned short) (unsigned char)206);
        arr_39 [i_10] = ((/* implicit */short) (((~(((/* implicit */int) arr_35 [i_10])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
        arr_40 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) min((max((((/* implicit */short) var_9)), ((short)22295))), (((/* implicit */short) ((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))) == (((/* implicit */int) ((arr_34 [i_10]) > (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10]))))))));
    }
    var_35 = ((/* implicit */short) min((((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (max((((/* implicit */unsigned long long int) (unsigned char)50)), (9469656404297628288ULL))))), (((/* implicit */unsigned long long int) 2666805395U))));
    var_36 = ((/* implicit */unsigned char) var_0);
}
