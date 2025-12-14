/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249782
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(var_7)))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (((unsigned long long int) 4294967289U))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((_Bool) -291851763129131150LL)))))) / (((((/* implicit */_Bool) min((291851763129131144LL), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */unsigned long long int) 291851763129131153LL)) * (var_6))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)114)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)115))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((((-(((/* implicit */int) (unsigned char)140)))) * (((/* implicit */int) (_Bool)1)))))))));
        var_15 *= ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])))) >= (((/* implicit */int) (unsigned char)114)))) || (((/* implicit */_Bool) -291851763129131170LL))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (2771609835801140466LL) : (var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) + (4279097260979117862ULL)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [(unsigned short)10] [(unsigned short)10] [i_1])) && (((/* implicit */_Bool) 4279097260979117862ULL)))))) + (((((/* implicit */_Bool) arr_7 [11U])) ? (var_4) : (arr_10 [18LL] [18LL]))))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(14167646812730433734ULL))))));
                        var_18 |= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_4]))));
                    }
                } 
            } 
            arr_17 [(unsigned char)17] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)148)) % (((/* implicit */int) arr_5 [i_2]))))) < (4279097260979117888ULL)));
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14167646812730433753ULL)) ? (var_3) : (var_3))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_9 [i_1 - 1])) : (7160307759840828807ULL))))));
            var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 2]))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (677259187U)))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) | (((((((/* implicit */unsigned long long int) arr_24 [i_6] [i_1] [i_1])) % (4279097260979117905ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))));
            var_23 = ((/* implicit */_Bool) ((((4279097260979117905ULL) != (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_6 [i_1] [i_1])) & (2771609835801140461LL)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (14167646812730433730ULL)))));
            /* LoopSeq 1 */
            for (long long int i_7 = 3; i_7 < 24; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            var_24 = 4279097260979117907ULL;
                            var_25 = ((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1]);
                            arr_33 [i_1] [i_7 - 1] [i_6] [i_1] = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) max(((((_Bool)1) ? (arr_10 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))))), (min((arr_10 [i_1] [i_1]), (var_4)))));
            }
            arr_34 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((14167646812730433699ULL) | (((/* implicit */unsigned long long int) arr_22 [i_6] [i_1] [i_1])))) >> (((/* implicit */int) (unsigned char)43))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_6 [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3743393214U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39508))) : (var_0)))))))) : (((((/* implicit */_Bool) 14167646812730433708ULL)) ? (14167646812730433734ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_1] [i_1] [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
        }
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(15414451132645766480ULL))))));
        arr_35 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_22 [i_1 + 3] [i_1 + 2] [i_1])) || (((/* implicit */_Bool) -2771609835801140478LL)))), (((((((/* implicit */long long int) var_1)) % (arr_22 [i_1] [i_1] [i_1]))) > (((long long int) arr_19 [i_1] [i_1]))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((14167646812730433697ULL) << (((4279097260979117893ULL) - (4279097260979117846ULL)))))))) ? (var_6) : (((/* implicit */unsigned long long int) var_0))));
}
