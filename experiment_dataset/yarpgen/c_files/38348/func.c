/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38348
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
    var_20 = ((/* implicit */_Bool) ((int) (((~(14567017921535879085ULL))) & (((14567017921535879085ULL) & (1143914305352105984ULL))))));
    var_21 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_12)))));
        arr_2 [2] |= ((/* implicit */signed char) (_Bool)0);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] &= ((/* implicit */int) 3879726152173672531ULL);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_13))))))) != ((~(3879726152173672531ULL)))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(3021988628U)))))) && (((/* implicit */_Bool) ((int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_3] [i_4 - 1]))));
            var_26 &= ((/* implicit */_Bool) 8ULL);
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_27 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (_Bool)1);
                        arr_20 [i_6] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                        var_29 += ((/* implicit */unsigned short) 9219630022283072233LL);
                        var_30 = -1489475023955680850LL;
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        arr_21 [i_3] = ((/* implicit */int) var_10);
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 1; i_9 < 19; i_9 += 4) 
            {
                var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */int) var_7)) != (((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_19))))))));
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_3))));
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((short) 0ULL)))));
                arr_26 [i_8] [i_3] [i_8] [i_9] = ((/* implicit */unsigned short) ((_Bool) arr_16 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]));
            }
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) - (((9223372036854775807LL) | (((/* implicit */long long int) var_10)))))))));
            arr_27 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) 14567017921535879094ULL);
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            arr_35 [i_3] [i_10] [i_3] [i_12] &= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            var_36 = ((/* implicit */unsigned char) 1365955441);
                            arr_36 [i_3] [i_8] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) + (arr_18 [i_3] [i_11] [i_11] [i_10])));
                        }
                    } 
                } 
            } 
            arr_37 [i_3] [i_8] [i_8] = 3021988628U;
        }
    }
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_13] [i_13] [i_13] [i_13])))));
        var_38 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) (unsigned short)32768)))))));
        arr_40 [(unsigned char)3] = ((/* implicit */unsigned short) -6987801932912721522LL);
        var_39 ^= ((/* implicit */int) arr_34 [(unsigned short)16] [i_13] [i_13] [i_13] [i_13]);
    }
    var_40 = (_Bool)1;
    var_41 = var_19;
}
